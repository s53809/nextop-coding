#include <stdio.h>
#define N 10

int n, a, A[N], maxNum = 0;

int main() {
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		A[a] = 1;
		if (maxNum < a) maxNum = a;
	}

	for (int i = 0; i <= maxNum; i++) {
		if (A[i] != 0) {
			printf("%d ", i);
		}
	}

	return 0;
}