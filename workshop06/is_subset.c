#include <assert.h>

int is_subset(char *str1, char *str2);

int
main(int argc, char *argv[]) {
	printf("Running tests:\n");
	assert(is_subset("abc", "bbbcccaaa"));
	assert(!is_subset("aaabbbccc", "abc"));
	assert(is_subset("abc", "abc"));
	assert(is_subset("bee", "rebel"));
	assert(!is_subset("rebel", "bee"));
	assert(is_subset("bee", "acerbate"));
	assert(!is_subset("bee", "brake"));
	printf("All tests passed!\n");

	return 0;
}

/* Returns 1 if every occurrence of a character in s1 also appears in s2, and 0 
   otherwise. 
   
   For example, is_subset("bee", "rebel") should be 1, whereas 
   is_subset("bee", "brake") should be 0. */
int 
is_subset(char *str1, char *str2) {
	/* YOUR CODE HERE. */
	return 0;
}
