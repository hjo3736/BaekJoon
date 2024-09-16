#include<iostream>
#include<vector>
#include<queue>

#define endl '\n'
#define MAX 5000010
using namespace std;

int N, L;
int Arr[MAX];

void Input() {
	cin >> N >> L;
	for (int i = 1; i <= N; i++) cin >> Arr[i];
}

void Solution() {
	deque<pair<int, int>> minResult;

	for (int i = 1; i <= N; i++) {
		if (!minResult.empty()) {
			if (minResult.front().first < i - L + 1) minResult.pop_front();
		}

		while (!minResult.empty() && minResult.back().second > Arr[i]) minResult.pop_back();

		minResult.push_back(make_pair(i, Arr[i]));
		cout << minResult.front().second << " ";
	}

	cout << endl;
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