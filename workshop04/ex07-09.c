#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000 

int count_ascending_runs(int A[], int n);
int read_int_array(int A[], int size);

int 
main(int argc, char *argv[]) {
    int A[SIZE];
    int n;

    n = read_int_array(A, SIZE);
    printf("There are %d runs in the array.\n", count_ascending_runs(A, n));

    return 0;
}

int
read_int_array(int A[], int size) {
    printf("Enter as many as %d values, ^D to end:\n", size);
    /* Your code here. */
    return 0;
}

/* Counts the number of non-decreasing runs in the array.

   eg. in the array {10, 13, 16, 18, 15, 22, 21} there are three runs. */
int
count_ascending_runs(int A[], int n) {
    /* Your code here. */
    return 0;
}
