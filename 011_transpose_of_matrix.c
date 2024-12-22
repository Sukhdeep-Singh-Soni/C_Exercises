/*
 * Program to find the transpose of a matrix
 * */

#include <stdio.h>

void transpose(int M, int N, int (*A)[N], int (*B)[M]);

int main(void) {
	int M = 3, N = 4;


	int A[3][4] = { {1, 1, 1, 1},
		        {2, 2, 2, 2},
		        {3, 3, 3, 3} };

	int B[N][M], i, j;

	transpose(M, N, A, B);

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}
}

void transpose(int M, int N, int (*A)[N], int (*B)[M]) {
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			B[i][j] = A[j][i];
		}
	}	
}
