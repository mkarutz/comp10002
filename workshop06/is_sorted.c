#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#define SIZE 5

void is_sorted(int A[], int n);

int
main(int argc, char *argv[]) {
	int A[SIZE] = {1, 2, 3, 4, 5};
	int B[SIZE] = {1, 5, 4, 2, 3};
	int C[SIZE] = {5, 5, 5, 5, 5};

	printf("Running tests:\n");
	assert(is_sorted(A, SIZE));
	assert(!is_sorted(B, SIZE));
	assert(is_sorted(C, SIZE));
	assert(is_sorted(A, 0));
	assert(is_sorted(B, 0));
	assert(is_sorted(C, 0));
	printf("All tests passed!\n");

	return 0;
}

/* Returns 1 if the elements of the array are sorted, otherwise returns 0. */
int 
is_sorted(char A[], int n) {
	/* Your code here. */
	return 0;
}
