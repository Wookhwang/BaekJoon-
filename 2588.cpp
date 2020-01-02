#pragma warning(disable:4996)
#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main() {

	int a;
	string b;
	int x;
	int y;
	int z;
	int result;

	cin >> a;
	cin >> b;

	x = a * (b[0] - 48);
	y = a * (b[1] - 48);
	z = a * (b[2] - 48);
	result = (x * 100) + (y * 10) + z;
	
	cout << z << endl;
	cout << y << endl;
	cout << x << endl;
	cout << result << endl;

	return 0;
}