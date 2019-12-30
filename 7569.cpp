 /* https://www.acmicpc.net/problem/7569 */

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <functional>
#include <queue>

using namespace std;

int m; /* 가로 */
int n; /* 세로 */
int h; /* 높이 */
int arr[100][100][100]; /* 상자 */
int cnt = 0; /* 날짜 */

void bfs();

typedef struct{
	int x; /* 가로 */
	int y; /* 세로 */
	int z; /* 높이 */
	int a; /* 날짜 */
} location;

queue<location> q;

/* 왼오아래위뒤앞 */
int dx[6] = { -1, 1, 0, 0, 0, 0 };
int dy[6] = { 0, 0, 0, 0, -1, 1 };
int dz[6] = { 0, 0, -1, 1, 0, 0 };

int main() {

	memset(arr, 0, sizeof(arr));
	
	cin >> m;
	cin >> n;
	cin >> h;

	/* 입력부 */
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> arr[i][k][j];
				if (arr[i][k][j] == 1) {
					location l;
					l.x = k;
					l.y = j;
					l.z = i;
					l.a = 0;
					q.push(l);
				}
			}
		}
	}
	/* 탐색 */
	bfs();

	
	/* 모두 바뀐 건지 확인 */
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (arr[i][k][j] == 0) {
					cnt = -1;
					break;
				}
			}
		}
	}
	
	/* 출력부 */
	cout << cnt << endl;

	return 0;
}

/* BFS 탐색 */
void bfs() {

	while (!q.empty())
	{
		int f_x = q.front().x;
		int f_y = q.front().y;
		int f_z = q.front().z;
		int f_a = q.front().a;
		q.pop();
		cnt = max(f_a, cnt);

		/* 인접한 박스 부분 검사 */
		for (int d = 0; d < 6; d++){
			location check;
			check.x = f_x + dx[d];
			check.y = f_y + dy[d];
			check.z = f_z + dz[d];
			
			/* 범위 확인 */
			if ((check.x >= 0 && check.x < m) && (check.y >= 0 && check.y < n) && (check.z >= 0 && check.z < h)) {
				if (arr[check.z][check.x][check.y] == 0) {
					arr[check.z][check.x][check.y] = 1;
					check.a = f_a + 1;
					q.push(check);
				}
			}
		}
	}
	return;
}