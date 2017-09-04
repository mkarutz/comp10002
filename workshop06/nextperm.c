#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void nextperm(char *s);

int
main() {
	char s1[] = "51432";
	char s2[] = "12345";
	char s3[] = "54321";
	char s4[] = "aaaab";

	printf("Running tests:\n");
	nextperm(s1);
	assert(strcmp(s1, "52134") == 0);

	nextperm(s2);
	assert(strcmp(s2, "12354") == 0);

	nextperm(s3);
	assert(strcmp(s3, "12345") == 0);

	nextperm(s4);
	nextperm(s4);
	nextperm(s4);
	nextperm(s4);
	assert(strcmp(s4, "baaaa") == 0);
	printf("All tests passed!\n");

	return 0;
}

/* Rearranges the characters in a string argument and generates the 
   lexicographically next permutation of the same letters. 
   
   For example, if the string s is initially "51432", then when the function 
   returns s should be "52134". */
void 
nextperm(char *s) {
	/* Your code here. */
}
