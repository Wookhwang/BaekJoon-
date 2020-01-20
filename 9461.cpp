/*
BaekJoon 9461
Problem name : 파도반 수열
category : dp
*/

#include <iostream>
#include <stdio.h>

using namespace std;

long long p[101];

int main() {

	int T;
	int N;
	p[1] = 1;
	p[2] = 1;
	p[3] = 1;

	cin >> T;
	for (int j = 1; j <= T; j++) {
		cin >> N;
		for (int i = 4; i <= N; i++) {
			p[i] = (p[i - 2] + p[i - 3]);
		}
		printf("%lld\n", p[N]);
	}

	return 0;
}

