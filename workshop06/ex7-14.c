#include <assert.h>
#include <ctype.h>
#include <limits.h>
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
	assert(my_atoi("") == 0);
	assert(my_atoi("-2147483648") == INT_MIN);
	assert(my_atoi("2147483647") == INT_MAX);
	assert(my_atoi("   123") == 123);
	assert(my_atoi("   -123abc") == -123);
	printf("All tests passed!\n");

	return 0;
}

int
my_atoi(char *str) {
	/* YOUR CODE HERE. */
	return 0;
}