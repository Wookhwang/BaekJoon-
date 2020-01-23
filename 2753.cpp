/*
BaekJoon 2753
Problem name : ¿î³â
category : if¹®
*/

#include <iostream>

using namespace std;

int main() {

	int year;
	cin >> year;

	if ((year % 400) == 0 || (((year % 100) != 0) && ((year % 4) == 0))) {
		cout << "1" << endl;
	}
	else {
		cout << "0" << endl;
	}

	return 0;
}

