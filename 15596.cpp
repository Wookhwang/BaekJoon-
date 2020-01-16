#include <iostream>

using namespace std;

long long sum(int *a, int n) {
	long long ans = 0;
	while (n > -1) {
		ans += a[n-1];
		n--;
	}

	return ans;
}

int main() {

	return 0;

}