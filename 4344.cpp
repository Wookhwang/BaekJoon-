/*
BaekJoon 4344
Problem name : 평균은 넘겠지
category : 1차원 배열
*/

#include <iostream>

using namespace std;

int main() {

	int arr[10001];
	double avg = 0;
	int T;
	int C;
	

	cin >> C;
	for (int j = 0; j < C; j++){
		int count = 0;
		int sum = 0;
		cin >> T;
		for (int i = 0; i < T; i++) {
			cin >> arr[i];
			sum += arr[i];
		}

		avg = (double)(sum / T);
		
		for (int k = 0; k < T; k++) {
			if (arr[k] > avg) {
				count++;
			}
			else {
				;
			}
		}	 
		printf("%.3f%% \n", ((double)count / (double)T) * 100);
	}
	return 0;
}
