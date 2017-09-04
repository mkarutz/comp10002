#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#define SIZE 5
#define EXPECTED_A 2
#define EXPECTED_B 0

void find_longest_run(int A[], int n);

int
main() {
    int A[SIZE] = {1, 2, 1, 2, 3};
    int B[SIZE] = {1, 1, 1, 1, 1};

    printf("Running tests:\n");
    assert(find_longest_run(A, SIZE) == EXPECTED_A);
    assert(find_longest_run(B, SIZE) == EXPECTED_B);
    printf("All tests passed!\n");

    return 0;
}

/* Returns the start point of the longest run of ascending values in the given
   array. Does not alter the array. */
int 
find_longest_run(char A[], int n) {
    /* Your code here. */
    return 0;
}
