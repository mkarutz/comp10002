#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_palindrome(char *S);

int 
main(int argc, char *argv[]) {
    printf("Running tests:\n");
    assert(is_palindrome("rats live on no evil star"));
    assert(is_palindrome("racecar"));
    assert(is_palindrome(""));
    assert(is_palindrome("a"));
    assert(!is_palindrome("A man, a plan, a canal, Panama!"));
    assert(!is_palindrome("race car"));
    printf("All tests passed!\n");

    return 0;
}

int
is_palindrome(char *S) {
    /* Your code here. */
    return 0;
}
