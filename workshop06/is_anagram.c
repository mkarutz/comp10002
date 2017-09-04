#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_anagram(char *str1, char *str2);

int 
main(int argc, char *argv[]) {
	printf("Running tests:\n");
	assert(is_anagram("Algorithms", "Glamor Hits"));
	assert(is_anagram("LUSTER", "result"));
	assert(is_anagram("anything", "any     thing"));
	assert(is_anagram("", ""));
	assert(!is_anagram("", "anything"));
	assert(!is_anagram("something", "something else"));
	printf("All tests passed!\n");

	return 0;
}

/* Returns 1 if the two strings contain the same letters, possibly in a 
   different order, and 0 otherwise, ignoring whitespace characters, and 
   ignoring case. 
   
   For example, is_anagram("Algorithms", "Glamor Hits") should return 1. */
int 
is_anagram(char *str1, char *str2) {
	/* Your code here. */
	return 0;
}
