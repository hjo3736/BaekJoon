#include<iostream>
#include<cmath>
#include<list>

#define endl '\n'
using namespace std;

int T;
int x, y, r;
int x2, y2, r2;

list<int> result;

void Solution() {
	double center_distance = sqrt(pow(x - x2, 2) + pow(y - y2, 2));
	double distance_add = r + r2;
	double distance_sub = r > r2 ? r - r2 : r2 - r;

	if (center_distance == 0 && distance_sub == 0)
		result.push_back(-1);
	else if (distance_add == center_distance || distance_sub == center_distance)
		result.push_back(1);
	else if (distance_sub < center_distance && center_distance < distance_add)
		result.push_back(2);
	else
		result.push_back(0);
}

void Solve() {
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> x >> y >> r >> x2 >> y2 >> r2;
		Solution();
	}

	list<int>::iterator iter = result.begin();

	for (iter; iter != result.end(); iter++)
		cout << *iter << endl;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();

	return 0;
}