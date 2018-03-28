#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000 

int kth_smallest(int A[], int n, int k);
int read_int_array(int A[], int maxvals);
int read_k(int n);

int 
main(int argc, char *argv[]) {
	int A[SIZE];
	int n, k;

	/* Read in the value for k. */
	k = read_k(SIZE);

	/* Read in the array. */
	n = read_int_array(A, SIZE);
	
	/* Check that k and n are valid. */
	if (n <= k) {
	    printf("Error: not enough integers for the given value of k.\n");
	    exit(EXIT_FAILURE);
	}
	
	/* Print the kth smallest value. */
	printf("The kth smallest value is %d.\n", kth_smallest(A, n, k));

	return 0;
}

int
read_int_array(int A[], int maxvals) {
	printf("Enter as many as %d values, ^D to end:\n", maxvals);
	/* YOUR CODE HERE. */
	return 0;
}

/* Reads a value between 0 and n - 1. */
int
read_k(int n) {
	int k;
	printf("Enter a value for k between 0 and %d: ", n - 1);
	if (scanf("%d", &k) != 1 || k < 0 || k > n - 1) {
		printf("Invalid input for k.\n");
		exit(EXIT_FAILURE);
	}
	return k;
}

/* Gets the kth smallest value in the array. */
int
kth_smallest(int A[], int n, int k) {
	/* YOUR CODE HERE. */
	return 0;
}
