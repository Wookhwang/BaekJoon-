/*
BaekJoon 15652
Problem name : N°ú M(4)
category : back tracking
*/

#include <iostream>
#include <cmath>

#define endl '\n'

using namespace std;



int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	double x1;
	double y1;
	double r1;
	double x2;
	double y2;
	double r2;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		double circle_between_length = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

		if ((x1 == x2) && (y1 == y2) && (r1 == r2)) {
				cout << -1 << endl;
		}
		else if (circle_between_length == abs(r1 - r2) || circle_between_length == abs(r1 + r2)) {
			cout << 1 << endl;
		}
		else if (circle_between_length > abs(r1 - r2) && circle_between_length < abs(r1 + r2)) {
			cout << 2 << endl;
		}
		else if (circle_between_length < abs(r1 - r2) || circle_between_length > abs(r1 + r2)) {
			cout << 0 << endl;
		}
		else {
			cout << 2 << endl;
		}
	}
	return 0;
}
/*
0 0 4 4 8 12 
d = 8.9
sum 20
sub 4
*/