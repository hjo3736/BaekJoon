#include<iostream>

using namespace std;

int A, B;

void Input() {
	cin >> A >> B;
}

void Solution() {
	cout << A + B;
}

void Solve() {
	Input();
	Solution();
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();

	return 0;
}