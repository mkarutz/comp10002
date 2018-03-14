#include <assert.h>

int is_subsequence(char *s1, char *s2);

int
main(int argc, char *argv[]) {
	printf("Running tests:\n");
	assert(is_subsequence("abc", "aaabbbccc"));
	assert(!is_subsequence("aaabbbccc", "abc"));
	assert(is_subsequence("abc", "abc"));
	assert(is_subsequence("bee", "abbreviate"));
	assert(!is_subsequence("bee", "acerbate"));
	printf("All tests passed!\n");

	return 0;
}

/* Returns 1 if the characters in s1 appear within s2 in the same order as they 
   appear in s1. 
   
   For example, is_subsequence("bee", "abbreviate") should be 1, whereas 
   is_subsequence("bee", "acerbate") should be 0.*/
int 
is_subsequence(char *s1, char *s2) {
	/* YOUR CODE HERE. */
	return 0;
}
