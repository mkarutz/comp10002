#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_anagram(char *A, char *B);

int 
main(int argc, char *argv[]) {
    printf("Running tests:\n");
    assert(is_anagram("luster", "result"));
    assert(is_anagram("disease", "seaside"));
    assert(is_anagram("anything", "anything"));
    assert(!is_anagram("something", "something else"));
    printf("All tests passed!\n");

    return 0;
}

int 
is_anagram(char *A, char *B); {
    /* Your code here. */
    return 0;
}
