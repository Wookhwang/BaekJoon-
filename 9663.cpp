/*
BaekJoon 9663
Problem name : N-QUEEN
category : back tracking
*/

#include <iostream>
#include <vector>

#define endl '\n'

using namespace std;

int N;
int col[15];
int result = 0;

bool promising(int i) {
	for (int j = 0; j < i; j++) {
		if (col[j] == col[i] || abs(col[j] - col[i]) == (i - j)) {
			return false;
		}
	}
	return true;
}

void dfs(int i) {
	if (i == N) {
		result += 1;
	}
	else {
		for (int j = 0; j < N; j++) {
			col[i] = j;
			if (promising(i)) {
				dfs(i + 1);
			}
		}
	}
}

int main() {
	
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N;

	dfs(0);

	cout << result << endl;

	return 0;
}