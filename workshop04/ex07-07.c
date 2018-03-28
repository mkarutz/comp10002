#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000 

int most_frequent(int A[], int n);
int read_int_array(int A[], int maxvals);

int 
main(int argc, char *argv[]) {
	int A[SIZE];
	int n;

	/* Read in the array. */
	n = read_int_array(A, SIZE);
	
	/* Print the most frequent value. */
	printf("The most frequent value is %d.\n", most_frequent(A, n));

	return 0;
}

int
read_int_array(int A[], int maxvals) {
	printf("Enter as many as %d values, ^D to end:\n", maxvals);
	/* YOUR CODE HERE. */
	return 0;
}

/* Gets the value that appears most frequently in the array. The array is not 
   modified. */
int
most_frequent(int A[], int n) {
	/* YOUR CODE HERE. */
	return 0;
}
