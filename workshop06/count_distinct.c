#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#define SIZE 5
#define EXPECTED_A 5
#define EXPECTED_B 1

int count_distinct(int A[], int n);

int
main(int argc, char *argv[]) {
	int A[SIZE] = {1, 2, 3, 4, 5};
	int B[SIZE] = {1, 1, 1, 1, 1};

	printf("Running tests:\n");
	assert(count_distinct(A, SIZE) == EXPECTED_A);
	assert(count_distinct(B, SIZE) == EXPECTED_B);
	assert(count_distinct(A, 0) == 0);
	assert(count_distinct(B, 0) == 0);
	printf("All tests passed!\n");

	return 0;
}

/* Returns the number of distinct values in the array. The array is not 
   modified.*/
int 
count_distinct(int A[], int n) {
	/* YOUR CODE HERE. */
	return 0;
}
