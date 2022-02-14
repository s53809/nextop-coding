//¹è³¶ ¹®Á¦
#include <stdio.h>
#include <stdlib.h>

int N;
int* kg;
int* gachi;
int** x;
int maximumKg = 0;

int main() {
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
	
	scanf("%d", &N);

	kg = (int*)malloc(sizeof(int) * N);
	gachi = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d%d", &kg[i], &gachi[i]);
		if (maximumKg < kg[i]) {
			maximumKg = kg[i];
		}
	}

	x = (int**)malloc(sizeof(int*) * maximumKg);
	for (int i = 0; i < N; i++) {
		
	}
	
	return 0;
}