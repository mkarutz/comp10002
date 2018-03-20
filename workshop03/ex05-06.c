#include <stdio.h>
#include <stdlib.h>

int is_amicable_pair(int x, int y);
int sum_factors(int x);

int 
main(int argc, char *argv[]) {
	int x, y;

	printf("Enter a pair of integers:");
	if (scanf("%d %d", &x, &y) != 2) {
		printf("Invalid input.\n");
		exit(EXIT_FAILURE);
	}

	if (is_amicable_pair(x, y)) {
		printf("Amicable!\n");
	} else {
		printf("Not amicable.\n");
	}

	return 0;
}

/* Returns 1 if x and y are an amicable pair (ie. the factors of x add up to y, 
   and the factors of y add up to x), otherwise returns 0. */
int
is_amicable_pair(int x, int y) {
	/* YOUR CODE HERE. */
	return 0;
}

/* Returns the sum of the factors of x. */
int
sum_factors(int x) {
	/* YOUR CODE HERE */
	return 0;
}
