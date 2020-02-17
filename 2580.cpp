/*
BaekJoon 2580
Problem name : 스도쿠
category : back tracking
*/

#include <iostream>

#define endl '\n'

using namespace std;

int arr[9][9]; // 스토쿠 전체 배열
bool raw[9][9]; // 행에 숫자 유무 확인
bool col[9][9]; // 열에 숫자 유무 확인
bool square[9][9]; // 3 * 3 정사각형의 숫자 유무 확인

void dfs(int i) {

	int x = i / 9; // 행을 유지
	int y = i % 9; // 열은 지속적으로 변경

	if (i == 81) {
		for (int j = 0; j < 9; j++)
		{
			for (int k = 0; k < 9; k++)
			{
				cout << arr[j][k] << " ";
			}
			cout << endl;
		}
		// exit(0)를 안하면 찾은 모든 경우의 수가 출력된다. 꼭 추가해야함!
		exit(0);
	}
	
	if (arr[x][y] == 0) {
		for (int j = 1; j <= 9; j++) {
			// 행, 열, 사각형에 없는 숫자를 찾는다. 찾고나면 있다고 각 배열에 표시하고 추가한다음에 leaf로 이동
			if (raw[x][j] == false && col[y][j] == false && square[(x / 3) * 3 + (y / 3)][j] == false) {
				raw[x][j] = true;
				col[y][j] = true;
				square[(x / 3) * 3 + (y / 3)][j] = true;
				arr[x][y] = j;
				dfs(i + 1);
				arr[x][y] = 0;
				raw[x][j] = false;
				col[y][j] = false;
				square[(x / 3) * 3 + (y / 3)][j] = false;

			}
		}
	}
	else {
		dfs(i + 1);
	}

}

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] != 0) {
				raw[i][arr[i][j]] = true;
				col[j][arr[i][j]] = true;
				square[(i / 3) * 3 + (j / 3)][arr[i][j]] = true;
			}
		}
	}

	dfs(0);

	return 0;
}