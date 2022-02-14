#include <stdio.h>
#define N 12

int A[N][N];
int h, w;
int d_x[] = { -1,1,0,0 };
int d_y[] = { 0,0,-1,1 };
int n = 10;
int count = 0;
int Q[N * N][3];
int rear = 1;
int front = 0;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	Q[0][1] = 1;
	Q[0][2] = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	A[1][1] = 1;
	while (1) {
		if (front > rear) {
			break;
		}
		h = Q[front][1];
		w = Q[front][2];
		front++;
		for (int i = 0; i < 4; i++) {
			int dir_x = d_x[i] + w;
			int dir_y = d_y[i] + h;
			if (A[dir_y][dir_x] == 0 && dir_y > 0 && dir_y <= n && dir_x > 0 && dir_x <= n) {
				A[dir_y][dir_x] = A[h][w] + 1;
				Q[rear][1] = dir_y;
				Q[rear][2] = dir_x;
				rear++;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}
}