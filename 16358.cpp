#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {

	int m; /* evaluators*/
	int n; /* cosmetics */
	int arr[501][501]; /* table */
	int result[501];
	int min_num = 99999999;

	memset(result, 0, sizeof(result));

	/* input */
	cin >> m; 
	cin >> n; 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m;j++) {
			cin >> arr[i][j];
		}
	}

	/* logic */
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[j][i] == 0) {
				result[i] += n;
			}
			else {
				result[i] += arr[j][i];
			}
		}
	}

	for (int i = 0; i < n-1; i++) {
		min_num = min(min_num, result[i]);
	}

	for (int i = 0; i < n; i++) {
		if (result[i] == min_num) {
			printf("%d ", i + 1);
		}
	}
}