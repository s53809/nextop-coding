#include <stdio.h>
#define N 40

int i, n, a;
int check[50], max;

int main() {
 	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);

	scanf("%d", &n);
	for (int j = 1; j <= n; j++) {
		scanf("%d", &a); // 5 2 3 4
		max += a;
		for (i = 1; i <= max; i++) {
			if (check[i] && check[i] < j && !check[j + a]) {
				check[i + a] = j;
			}
		}
		check[a] = j;
	}
}