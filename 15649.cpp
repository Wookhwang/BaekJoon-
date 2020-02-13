/*
BaekJoon 15649
Problem name : N°ú M(1)
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

void dfs(int count){
	
	if (count == M) {
		for (int i = 0; i < V.size(); i++) {
			printf("%d ", V[i]);

		}
		printf("\n");
		return;
	}
	

	for (int i = 1; i <= N; i++) {
		if (arr[i] == true) {
			continue;
		}
		arr[i] = true;
		V.push_back(i);
		dfs(count + 1);
		arr[i] = false;
		V.pop_back();
	}
}

int main() {
	
	cin >> N >> M;

	dfs(0);

	return 0;

}