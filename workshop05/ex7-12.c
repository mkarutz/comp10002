#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int is_palindrome(char *S);

int 
main(int argc, char *argv[]) {
    char *S1 = "rats live on no evil star";
    char *S2 = "A man, a plan, a canal, Panama!";

    printf("Running tests:\n");
    assert(is_palindrome(S1));
    assert(!is_palindrome(S2));
    printf("All tests passed!\n");

    return 0;
}

int
is_palindrome(char *S) {
    /* Your code here. */
    return 0;
}
