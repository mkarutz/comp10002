#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000 

int count_ascending_runs(int A[], int n);
int read_int_array(int A[], int maxvals);

int 
main(int argc, char *argv[]) {
	int A[SIZE];
	int n;

	/* Read in the array. */
	n = read_int_array(A, SIZE);
	
	/* Print the number of ascending runs. */
	printf("There are %d runs in the array.\n", count_ascending_runs(A, n));

	return 0;
}

int
read_int_array(int A[], int maxvals) {
	printf("Enter as many as %d values, ^D to end:\n", maxvals);
	/* YOUR CODE HERE. */
	return 0;
}

/* Counts the number of non-decreasing runs in the array.
   eg. in the array {10, 13, 13, 16, 18, 15, 22, 21} there are three:
       1. {10, 13, 13, 16, 18}
       2. {15, 22}
       3. {21} */
int
count_ascending_runs(int A[], int n) {
	/* YOUR CODE HERE. */
	return 0;
}
