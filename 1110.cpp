#include <iostream>

using namespace std;

int main() {

	int initial;
	int temp;
	int a;
	int b;
	int new_num;
	int count = 0;

	cin >> initial;
	
	if (initial < 10) {
		initial *= 10;
	}

	a = initial / 10;
	b = initial % 10;
	temp = a + b;
	new_num = (b * 10) + (temp % 10);
	count++;

	if (new_num == initial) {
		cout << count << endl;
		return 0;
	}
	else {
		while (1) {

			a = new_num / 10;
			b = new_num % 10;
			temp = a + b;
			new_num = (b * 10) + (temp % 10);
			count++;

			if (new_num == initial) {
				break;
			}
		}
	}
	cout << count << endl;

	return 0;
}