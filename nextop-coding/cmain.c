#include <stdio.h>
#define N 10

struct abc {
	int a, b;
}A[N];

int R[N], n, B[N];

void print() {
	for (int i = 1; i <= n; i++) {
		printf("%d\n", B[i]);
	}
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		R[i] = 0;
		B[i] = 0;
		scanf("%d%d", &A[i].a, &A[i].b);
	}
	int max = 0, imsi = 0;
	for (int i = 1; i <= n; i++) {
		max = 0;
		imsi = 0;
		for (int j = i - 1; j >= 1; j--) {
			if (A[i].b > A[j].b && R[j] > max) {
				max = R[j];
				imsi = j;
			}
		}
		R[i] = max + 1;
		B[i] = imsi;
	}

	print();

	return 0;
}