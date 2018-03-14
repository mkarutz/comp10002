#include <stdio.h>
#include <stdlib.h>

#define MIN_CENTS 0
#define MAX_CENTS 1000

#define TWO_DOLLAR 200
#define ONE_DOLLAR 100
#define FIFTY_CENT 50
#define TWENTY_CENT 20
#define TEN_CENT 10
#define FIVE_CENT 5

int read_cents(int min, int max);
void print_change(int cents);
int try_one_coin(int *cents, int coin);
int round_to_5(int cents);

int 
main(int argc, char *argv[]) {
	int cents;

	cents = read_cents(MIN_CENTS, MAX_CENTS);
	cents = round_to_5(cents);
	print_change(cents);

	return 0;
}

int
read_cents(int min, int max) {
	int cents;

	printf("Enter amount in cents: ");
	if (scanf("%d", &cents) != 1 || cents < min || cents > max) {
		printf("Error: Please enter an amount between %d and %d.\n", min, max);
		exit(EXIT_FAILURE);
	}

	return cents;
}

int
round_to_5(int cents) {
	/* YOUR CODE HERE. */
	return 0;
}

/* Prints the required coins for the given amount of change. */
void
print_change(int cents) {
	printf("The coins required to make %d cents are:\n", cents);
	/* YOUR CODE HERE. */
}

/* Returns the number of coins to give, and updates the remaining amount. */
int
try_one_coin(int *cents, int coin) {
	/* YOUR CODE HERE. */
	return 0;
}
