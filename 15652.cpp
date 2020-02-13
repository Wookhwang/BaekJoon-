/*
BaekJoon 15652
Problem name : N°ú M(4)
category : back tracking
*/

#include <iostream>
#include <vector>

#define endl '\n'

using namespace std;

bool arr[10];
int N;
int M;
vector<int> V;

void dfs(int index, int count) {
	if (count == M) {
		for (int i = 0; i < M; i++) {
			cout << V[i] << " ";
		}
		cout << endl;
		return;
	}

	for (int i = index; i < N; i++) {
		arr[i] = true;
		V.push_back(i + 1);
		dfs(i, count + 1);
		arr[i] = false;
		V.pop_back();
	}
}

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N >> M;

	dfs(0, 0);

	return 0;
}