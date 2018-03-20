#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define ISWORDCH(c) !isspace(c)

int
main(int argc, char **argv) {
	int ch_cnt = 0, ln_cnt = 0, wd_cnt = 0;
	int isword = 0;
	char ch;

	printf("Enter text:\n");

	while ((ch = getchar()) != EOF) {
		ch_cnt++;
		if (ch == '\n') {
			ln_cnt++;
		}
		if (!isword && ISWORDCH(ch)) {
			wd_cnt++;
		}
		isword = ISWORDCH(ch);
	}

	printf("Lines: %5d\n", ln_cnt);
	printf("Chars: %5d\n", ch_cnt);
	printf("Words: %5d\n", wd_cnt);

	return 0;
}
