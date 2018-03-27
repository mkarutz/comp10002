#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000 

void print_int_array(int A[], int n);
int read_int_array(int A[], int size);
void selection_sort(int A[], int n);
void swap_ints(int *a, int *b);

int 
main(int argc, char *argv[]) {
	int A[SIZE];
	int n;

	/* Read in the array. */
	n = read_int_array(A, SIZE);
	
	/* Print the array before sorting. */
	printf("Before: ");
	print_int_array(A, n);

	/* Sort the array. */
	selection_sort(A, n);
	
	/* Print the array after sorting. */
	printf("After: ");
	print_int_array(A, n);

	return 0;
}

int
read_int_array(int A[], int size) {
	printf("Enter as many as %d values, ^D to end:\n", size);
	/* YOUR CODE HERE. */
	return 0;
}

void
print_int_array(int A[], int n) {
	/* YOUR CODE HERE. */
}

void
selection_sort(int A[], int n) {
	/* YOUR CODE HERE. */
}

void
swap_ints(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
