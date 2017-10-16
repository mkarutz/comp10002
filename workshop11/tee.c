#include <stdio.h>
#include <stdlib.h>

#define MAXFILE 10

int
main(int argc, char **argv) {
	FILE *fp[MAXFILE];
	int i, ch;

	if (argc < 2) {
		printf("ERROR: No arguments specified.\n");
		exit(EXIT_FAILURE);
	}

	/* Open each of the files indicated by command-line arguments. */
	/* YOUR CODE HERE */

	/* Read input from stdin and echo it out to each file.*/
	while ((ch = getchar()) != EOF) {
		/* YOUR CODE HERE */
	}

	/* Close all the files when we are done. */
	/* YOUR CODE HERE */

	return EXIT_SUCCESS;
}

