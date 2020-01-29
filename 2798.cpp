/*
BaekJoon 2798
Problem name : 블랙잭
category : 브루스 포스
*/

#include <iostream>

using namespace std;

int main() {
	int N;
	int M;
	int arr[101];
	int sum[161700];
	int count = 0;
	int temp = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int x = 0; x < N; x++) {
		for (int y = x + 1; y < N; y++) {
			for (int z = y + 1; z < N; z++) {
				sum[count] = arr[x] + arr[y] + arr[z];
				count++;
			}
		}
	}

	for (int j = 0; j < count; j++) {
		if (sum[j] <= M && sum[j] > temp) {
			temp = sum[j];
		}
	}

	cout << temp << endl;

}