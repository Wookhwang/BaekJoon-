#include <iostream>

using namespace std;

int main() {

	int n;
	int num[101];
	int count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	for (int j = 0; j < n; j++) {
		bool isPrime = true;
		
		// 2부터 N-1의 수로 나눠서 나눠지는 수가 있으면 반복문 종료
		for (int k = 2; k < num[j]; k++) {
			if (num[j] % k == 0) {
				isPrime = false;
				break;
			}
		}
		if (num[j] == 1) {
			isPrime = false;
		}

		if (isPrime) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}