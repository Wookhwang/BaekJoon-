/*
BaekJoon 1065
Problem name : 한수
category : 함수, 브루스 포스
*/

#include <iostream>

using namespace std;

bool hansu(int N) {

	if (N < 100) {
		return true;
	}
	else if (N < 1000) {
		if ((N / 100 - (N / 10 - N / 100 * 10)) == ((N / 10 - N / 100 * 10) - N % 10)) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

int main() {

	int count = 0;
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		if (hansu(i)) {
			count++;
		}
		else {
			;
		}
	}

	cout << count << endl;

	return 0;
}