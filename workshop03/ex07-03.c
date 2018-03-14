#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000 

void print_int_array(int A[], int n);
int read_int_array(int A[], int size);
int remove_repeats(int A[], int n);
int sort_reduce_int_array(int A[], int n);
void sort_int_array(int A[], int n);
void swap_ints(int *a, int *b);

int
main(int argc, char *argv[]) {
	int A[SIZE];
	int n;

	n = read_int_array(A, SIZE);
	printf("Before: ");
	print_int_array(A, n);

	n = sort_reduce_int_array(A, n);
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

/* Sorts an array of integers, removing repeats. Returns the number of distinct 
   values. */
int
sort_reduce_int_array(int A[], int n) {
	sort_int_array(A, n);
	return remove_repeats(A, n);
}

void
sort_int_array(int A[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = i; j > 0 && A[j] > A[j - 1]; j--) {
			swap_ints(&A[j], &A[j - 1]);
		}
	}
}

void
swap_ints(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

/* Removes repeated values from a sorted array of integers. The distinct values 
   will remain in sorted order. Returns the number of distinct values. */
int
remove_repeats(int A[], int n) {
	/* Your code here. */
	return 0;
}
