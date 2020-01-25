#pragma warning(disable:4996)
#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
/*

의문점 : 
 동적계획법으로 해결 할때 한번 호출한 수를 여러번 호출할때는 
0과 1을 호출하지 않아도 바로 호출이 되어서 횟수가 모두 0 0이 아닌가?
문제 이해를 잘못해서 많이 틀린건가.. 아니면 문제 설명이 잘못된건가 하는 의문이 생김...

*/

static long long arr[41] = {1,1};

long long fibonacci(int x);

int main() {

	int t;
	int n;
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		
		if (n == 0) {
			cout << 1 << " " << 0 << endl;
		}
		else {
			cout << fibonacci(n - 2);
			cout << " ";
			cout << fibonacci(n - 1) << endl;
		}
	}	
	return 0;
}


long long fibonacci(int x) {
	
	if (x <= 1) {
		return arr[x];
	}
	else if (arr[x] > 0) {
		return arr[x];
	}
	else {
			return arr[x] = fibonacci(x -1) + fibonacci(x - 2);
		}
}