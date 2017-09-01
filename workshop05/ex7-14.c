#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_atoi(char *str);

int 
main(int argc, char *argv[]) {
    printf("Running tests:\n");
    assert(my_atoi("100") == 100);
    assert(my_atoi("-100") == -100);
    assert(my_atoi("0") == 0);
    assert(my_atoi("-2147483648") == -2147483648);
    assert(my_atoi("2147483647") == 2147483647);
    printf("All tests passed!\n");

    return 0;
}

int
my_atoi(char *str) {
    /* Your code here. */
    return 0;
}
