/* File: main.c */

#include <stdio.h>
#include <stdlib.h>
#include "../lib/matmult.h"

int main(int argc, char **argv) {

	int nrow = 10062, nval = 10015, ncol = 1007;
	double *C;

	C = matmult(argc, argv, nrow, nval, ncol);

	/* print matrix result */
	printf("Here is the result matrix:");
	for (size_t i = 0; i < nrow; i++) {
		printf("\n");
		for (size_t j = 0; j < ncol; j++)
			printf("%6.2e   ", C[i*ncol + j]);
	}
	printf("\n");

	return 0;
}
