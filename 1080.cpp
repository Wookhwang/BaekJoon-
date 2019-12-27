#pragma warning(disable:4996)
#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

void change(int x, int y);

int a[50][50];
int b[50][50];

int main() {
	int n;
	int m;
	int result = 0;
	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++)
			a[i][j] = s[j] - 48;
	}

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++)
			b[i][j] = s[j] - 48;
		}
	
	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < m - 2; j++) {
			if (a[i][j] != b[i][j]) {
				change(i, j);
				result++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != b[i][j]) {
				result = -1;
			}
		}
	}

	cout << result;

	return 0;
}

void change(int x, int y) {

	for (int i = x; i < x + 3; i++) {
		for (int j = y; j < y + 3; j++) {
			if (a[i][j] == 0) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = 0;
			}
		}
	}
}