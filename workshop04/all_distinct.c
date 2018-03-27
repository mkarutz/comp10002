#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000 

int read_int_array(int A[], int size);
int all_distinct(int A[], int n);

int 
main(int argc, char *argv[]) {
	int A[SIZE];
	int n;

	/* Read in the array. */
	n = read_int_array(A, SIZE);
	
	/* Check if all distinct */
	if (all_distinct(A, n)) {
	    printf("All distinct!\n");
	} else {
	    printf("Not all distinct.\n");
	}

	return 0;
}

int
read_int_array(int A[], int maxvals) {
    printf("Enter as many as %d values, ^D to end:\n", maxvals);
    return 0;
}

int
all_distinct(int A[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
	    for (j = i + 1; j < n; j++) {
	        if (A[i] == A[j]) {
	            return 0;
	        }
	    }
	}
	return 1;
}
