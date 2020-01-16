/*
BaekJoon 4673
Problem name : self number
category : function
*/

#include <iostream>

using namespace std;

int a[10001];

int d(int n) {
	int ans = n;
	while (n > 0) {
		ans += n % 10;
		n /= 10;
	}
	return ans;
}

int main() {
	
	for (int i = 1; i <= 10000; ++i) {
		int dn = d(i);
		if (dn <= 10000) {
			a[dn] = 1;
		}
	}

	for (int i = 1; i <= 10000; ++i) {
		if (!a[i]) {
			cout << i << endl;
		}
	}
}