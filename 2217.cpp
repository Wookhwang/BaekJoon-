#pragma warning(disable:4996)
#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int rope;
	int weight[100000];
	int result[100000];
	int n = 1;
	int max;

	scanf("%d", &rope);

	for (int i = 0; i < rope; i++) {
		scanf("%d", &weight[i]);
	}

	sort(weight, weight + rope);

	for (int j = rope - 1; j >= 0; j--) {
		result[j] = weight[j] * n;
		n++;
	}

	sort(result, result + rope);

	max = result[rope - 1];

	printf("%d", max);
	
	return 0;
}