/* Exercise 7.6: Sort an array using selection sort. */
#include <stdio.h>

#define MAXVALS 1000

int read_int_array(int A[], int n);
void selection_sort(int A[], int n);
void print_int_array(int A[], int n);
void int_swap(int *p1, int *p2);

int
main(int argc, char *argv[]) {
	int nums[MAXVALS], n;

	n = read_int_array(nums, MAXVALS);

	printf("Before: ");
	print_int_array(nums, n);

	selection_sort(nums, n);

	printf("After: ");
	print_int_array(nums, n);

	return 0;
}

int
read_int_array(int A[], int maxvals) {
	int n, excess, next;
	printf("Enter as many as %d values, ^D to end\n", maxvals);
	n = 0; excess = 0;
	while (scanf("%d", &next)==1) {
		if (n==maxvals) {
			excess = excess+1;
		} else {
			A[n] = next;
			n += 1;
		}
	}
	printf("%d values read into array", n);
	if (excess) {
		printf(", %d excess values discarded", excess);
	}
	printf("\n");
	return n;
}

void
selection_sort(int A[], int n) {
	/* YOUR CODE HERE */
}

void
print_int_array(int A[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%4d", A[i]);
	}
	printf("\n");
}

void
int_swap(int *p1, int *p2) {
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
