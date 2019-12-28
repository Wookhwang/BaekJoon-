#include <iostream>
#include <string.h>
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
	int x; 
	int y; 
	
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
