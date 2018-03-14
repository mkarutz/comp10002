#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000 

void print_freq_table(int A[], int size);
int read_int_array(int A[], int size);

int 
main(int argc, char *argv[]) {
	int A[SIZE];
	int n;

	n = read_int_array(A, SIZE);
	print_freq_table(A, n);

	return 0;
}

int
read_int_array(int A[], int size) {
	printf("Enter as many as %d values, ^D to end:\n", size);
	/* YOUR CODE HERE. */
	return 0;
}

/* Prints a table of the frequencies of values in an array of integers. */
void
print_freq_table(int A[], int n) {
	printf("Value	Freq");
	/* YOUR CODE HERE. */
}

