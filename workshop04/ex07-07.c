#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000 

int most_frequent(int A[], int n);
int read_int_array(int A[], int size);

int 
main(int argc, char *argv[]) {
    int A[SIZE];
    int n;

    n = read_int_array(A, SIZE);
    printf("The most frequent value is %d.\n", most_frequent(A, n));

    return 0;
}

int
read_int_array(int A[], int size) {
    printf("Enter as many as %d values, ^D to end:\n", size);
    /* Your code here. */
    return 0;
}

/* Gets the value that appears most frequently in the array. The array is not 
   modified. */
int
most_frequent(int A[], int n) {
    /* Your code here. */
    return 0;
}
