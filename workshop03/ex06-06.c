#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void int_sort3(int *p1, int *p2, int* p3);

int 
main(int argc, char *argv[]) {
	int x, y, z;

	printf("Enter three integers:");
	if (scanf("%d %d %d", &x, &y, &z) != 3) {
		printf("Invalid input.\n");
		exit(EXIT_FAILURE);
	}

	int_sort3(&x, &y, &z);

	assert(x <= y && y <= z);

	return 0;
}

void
int_sort3(int *p1, int* p2, int* p3) {
	/* YOUR CODE HERE. */
}
