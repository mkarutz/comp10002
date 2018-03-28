#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000 

int kth_smallest(int A[], int n, int k);
int read_int_array(int A[], int maxvals);

int 
main(int argc, char *argv[]) {
	int A[SIZE];
	int n, k;

	/* Read in the array. */
	n = read_int_array(A, SIZE);
	
	/* Try some values of k. */
	for (k = 0; k < n; k++) {
	    printf("The %2dth smallest value is %3d.\n", k, kth_smallest(A, n, k));
	}

	return 0;
}

int
read_int_array(int A[], int maxvals) {
	printf("Enter as many as %d values, ^D to end:\n", maxvals);
	/* YOUR CODE HERE. */
	return 0;
}

/* Gets the kth smallest value in the array. */
int
kth_smallest(int A[], int n, int k) {
	/* YOUR CODE HERE. */
	return 0;
}
