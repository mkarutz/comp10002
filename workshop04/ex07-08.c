#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000 

int kth_smallest(int A[], int n, int k);
int read_int_array(int A[], int size);
int read_k(int n);

int 
main(int argc, char *argv[]) {
	int A[SIZE];
	int n, k;

	n = read_int_array(A, SIZE);
	k = read_k(n);
	printf("The kth smallest value is %d.\n", kth_smallest(A, n, k));

	return 0;
}

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

int
read_int_array(int A[], int size) {
	printf("Enter as many as %d values, ^D to end:\n", size);
	/* YOUR CODE HERE. */
	return 0;
}

/* Gets the kth smallest value in the array. */
int
kth_smallest(int A[], int n, int k) {
	/* YOUR CODE HERE. */
	return 0;
}
