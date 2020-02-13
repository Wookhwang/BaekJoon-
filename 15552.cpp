/*
BaekJoon 15552
Problem name : ºü¸¥ A+B
category : for¹®
*/

#include <iostream>

#define endl '\n'

using namespace std;

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	int A;
	int B;
	int result = 0;;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		result = A + B;
		cout << result << endl;
	}

	return 0;
}