#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000 

int count_inversions(int A[], int n);
int read_int_array(int A[], int size);

int 
main(int argc, char *argv[]) {
    int A[SIZE];
    int n;

    n = read_int_array(A, SIZE);
    printf("There are %d inversions in the array.\n", count_inversions(A, n));

    return 0;
}

int
read_int_array(int A[], int size) {
    printf("Enter as many as %d values, ^D to end:\n", size);
    /* Your code here. */
    return 0;
}

/* Counts the number "inversions", or the number of pairs that are out of order. 
   
   eg. in the array {10, 13, 16, 18, 15, 22, 21} there are three: 
   (13,18), (16,18), and (22,21) */
int
count_inversions(int A[], int n) {
    /* Your code here. */
    return 0;
}
