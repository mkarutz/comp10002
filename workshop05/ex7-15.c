#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_anagram(char *str1, char *str2);

int 
main(int argc, char *argv[]) {
	printf("Running tests:\n");
	assert(is_anagram("luster", "result"));
	assert(is_anagram("programming is fun", "prof margin musing"));
	assert(is_anagram("anything", "anything"));
	assert(is_anagram("", ""));
	assert(!is_anagram("", "anything"));
	assert(!is_anagram("something", "something else"));
	printf("All tests passed!\n");

	return 0;
}

int 
is_anagram(char *str1, char *str2) {
	/* Your code here. */
	return 0;
}
