/* Exercise 7.4: Counts frequencies of each value in an array. */
#include <stdio.h>

#define MAXVALS 1000

int read_int_array(int A[], int n);
void print_freqs(int A[], int n);

int
main(int argc, char *argv[]) {
	int nums[MAXVALS], n;

	n = read_int_array(nums, MAXVALS);
	print_freqs(nums, n);

	return 0;
}

void
print_freqs(int A[], int n) {
	/* YOUR CODE HERE */
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

