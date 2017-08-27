#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int is_anagram(char *A, char *B);

int 
main(int argc, char *argv[]) {
    printf("Running tests:\n");
    assert(is_anagram("luster", "result"));
    assert(is_anagram("result", "ulster"));
    assert(is_anagram("ulster", "rustle"));
    assert(!is_anagram("result", "wrestle"));
    printf("All tests passed!\n");

    return 0;
}

int 
is_anagram(char *A, char *B); {
    /* Your code here. */
    return 0;
}
