#include <stdio.h>

int R[101][21], A[101][21];

int main() {
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);

	int k, p, h, n, item, max, t;

	for (item = 1; item < t; item++) { // ¿·À¸·Î ÀÌµ¿
		for (h = 1; h <= n; h++) { // ¹ØÀ¸·Î ÀÌµ¿
			max = 0;
			for (k = 0, p = h; k <= h; k++, p--) {
				if (max < R[k][item - 1] + A[p][item]) {
					R[h][item] = max;
				}
			}
		}
	}
}