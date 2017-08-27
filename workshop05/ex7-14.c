#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int atoi(char *S);

int 
main(int argc, char *argv[]) {
    printf("Running tests:\n");
    assert(atoi("100") == 100);
    assert(atoi("-100") == -100);
    assert(atoi("0") == 0);
    assert(atoi("-2147483648") == -2147483648);
    assert(atoi("2147483647") == 2147483647);
    printf("All tests passed!\n");

    return 0;
}

int
atoi(char *S) {
    /* Your code here. */
    return 0;
}
