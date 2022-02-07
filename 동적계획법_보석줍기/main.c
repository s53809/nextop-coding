#include <stdio.h>
#define N 20

int A[N + 1][N + 1], R[N + 1][N + 1];
int n, k;

void input() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &A[i][j]);
		}
	}
}

void run() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			R[i][j] = R[i][j - 1] + R[i - 1][j] - R[i - 1][j - 1] + A[i][j];
		}
	}
}

void print() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%3d", R[i][j]);
		}
		printf("\n");
	}
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	scanf("%d%d", &n, &k);
	input();
	run();
	print();
}