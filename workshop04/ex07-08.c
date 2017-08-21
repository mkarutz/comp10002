#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000 

int kth_smallest(int A[], int n, int k);
int read_int_array(int A[], int size);

int 
main(int argc, char *argv[]) {
    int A[SIZE];
    int n, k;

    n = read_int_array(A, SIZE);
    printf("Enter a number between 0 and %d: ", n - 1);
    scanf("%d", &k);
    printf("The kth smallest value is %d.\n", kth_smallest(A, n));

    return 0;
}

int
read_int_array(int A[], int size) {
    printf("Enter as many as %d values, ^D to end:\n", size);
    /* Your code here. */
    return 0;
}

/* Gets the kth smallest value in the array. */
int
kth_smallest(int A[], int n, int k) {
    /* Your code here. */
    return 0;
}
