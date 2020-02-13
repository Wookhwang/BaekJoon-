/*
BaekJoon 15650
Problem name : N°ú M(2)
category : back tracking
*/

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

bool arr[10];
int N;
int M;
vector<int> V;

void dfs(int index, int count) {

	if (count == M) {
		for (int i = 0; i < M; i++)
			printf("%d ", V[i]);
	printf("\n");
	return;
	}

	for (int i = index; i < N; i++) {
		if (arr[i] == true) {
			continue;
		}
		arr[i] = true;
		V.push_back(i + 1);
		dfs(i, count + 1);
		arr[i] = false;
		V.pop_back();
	}
}

int main() {

	cin >> N >> M;

	dfs(0, 0);

	return 0;
}