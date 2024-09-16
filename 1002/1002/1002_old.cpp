#include<iostream>
#include<cmath>

#define endl '\n'
using namespace std;

int T;
int x, y, r;
int x2, y2, r2;

void Solution() {
	double center_distance = sqrt(pow(x - x2, 2) + pow(y - y2, 2));
	double distance_add = r + r2;
	double distance_sub = r > r2 ? r - r2 : r2 - r;

	if (center_distance == 0 && distance_sub == 0)
		cout << "-1" << endl;
	else if (distance_add == center_distance || distance_sub == center_distance)
		cout << "1" << endl;
	else if (distance_sub < center_distance && center_distance < distance_add)
		cout << "2" << endl;
	else
		cout << "0" << endl;
}

void Solve() {
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> x >> y >> r >> x2 >> y2 >> r2;
		Solution();
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();

	return 0;
}