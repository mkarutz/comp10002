#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000 

void print_freq_table(int A[], int size);
int read_int_array(int A[], int size);
void sort_int_array(int A[], int n);
void swap_ints(int *a, int *b);

int 
main(int argc, char *argv[]) {
    int A[SIZE];
    int n;

    n = read_int_array(A, SIZE);
    sort_int_array(A, n);
    print_freq_table(A, n);

    return 0;
}

int
read_int_array(int A[], int size) {
    printf("Enter as many as %d values, ^D to end:\n", size);
    /* Your code here. */
    return 0;
}

/* Given a sorted array, prints a table of its values and their frequencies. */
void
print_freq_table(int A[], int n) {
    printf("Value    Freq");
    /* Your code here. */
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
