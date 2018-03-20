#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void int_sort2(int *p1, int *p2);

int 
main(int argc, char *argv[]) {
	int x, y;

	printf("Enter a pair of integers:");
	if (scanf("%d %d", &x, &y) != 2) {
		printf("Invalid input.\n");
		exit(EXIT_FAILURE);
	}

	int_sort2(&x, &y);

	assert(x <= y);

	return 0;
}

void
int_sort2(int *p1, int* p2) {
	/* YOUR CODE HERE. */
}
