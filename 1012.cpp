#include <iostream>
#include <string.h>
/* #include <queue> */
using namespace std;

void dfs(int m_x, int n_y);
/* void bfs(int f_x, int f_y, queue< pair<int, int>> q); */
int arr[50][50];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int m;
int n;

int main() {

	int t;
	int k;
	int x; /* 행 */
	int y; /* 열 */
	
	/* queue< pair<int, int>> q; */	

	/* 입력부 */
	cin >> t;
	for (int a= 0; a < t; a++) {
		
		memset(arr, 0, sizeof(arr));
		
		cin >> m;
		cin >> n;
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> x;
			cin >> y;
			arr[x][y] = 1;
		}
	
		int count = 0;
		/* 검사부 */
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == 1) {
					dfs(i, j);
					count++;
				}			
			}
		}
		cout << count << endl;
	}
	
	return 0;
}

void dfs(int x, int y) {

	int check_x;
	int check_y;

	arr[x][y] = 0;
	
	for (int d = 0; d < 4; d++) {
		check_x = x + dx[d];
		check_y = y + dy[d];
	
		if (arr[check_x][check_y] == 1 && check_x >= 0 && check_x < m && check_y >= 0 && check_y < n) {
			dfs(check_x, check_y);
		}
	}
}
/*
void bfs(int f_x, int f_y, queue< pair<int, int>> q) {

	int x;
	int y;
	int n_x;
	int n_y;

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
	
		for (int d = 0; d < 4; d++) {
			n_x = x + dx[d];
			n_y = y + dy[d];

			if (n_x < 0 || n_x >= f_x) continue;
			if (n_y < 0 || n_y >= f_y) continue;
			if (check[n_x][n_y]) continue;
			if (arr[n_x][n_y] == 0) continue;

			check[n_x][n_y] = true;
			q.emplace(n_x, n_y);
		}
	}
	return;
}
*/