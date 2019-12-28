#pragma warning(disable:4996)
#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;


long long fibonacci(int x);

long long dp[90];

int main() {

	int n;
	long long result;
	cin >> n;

	result = fibonacci(n);

	cout << result;

}


long long fibonacci(int x) {
	if (x == 1) {
		return 1;
	}
	else if(x == 0){
		return 0;
	}
	else {
		if (dp[x] != 0) {
			return dp[x];
		}
		else {
			dp[x] = fibonacci(x - 1) + fibonacci(x - 2);
			return dp[x];
		}
	}
}