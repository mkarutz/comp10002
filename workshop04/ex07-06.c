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

	n = read_int_array(A, SIZE);
	printf("Before: ");
	print_int_array(A, n);

	selection_sort(A, n);
	printf("After: ");
	print_int_array(A, n);

	return 0;
}

int
read_int_array(int A[], int size) {
	printf("Enter as many as %d values, ^D to end:\n", size);
	/* Your code here. */
	return 0;
}

void
print_int_array(int A[], int n) {
	/* Your code here. */
}

void
selection_sort(int A[], int n) {
	/* Your code here. */
}

void
swap_ints(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
