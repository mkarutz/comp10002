#include <stdio.h>

void plot_bar(int n);

int
main(int argc, char **argv) {
	int n;
	printf("Enter numbers: ");
	while (scanf("%d", &n) == 1) {
		plot_bar(n);
	}
	return 0;
}

void
plot_bar(int n) {
	int i;
	printf("%3d | ", n);
	for (i = 0; i < n; i++) {
		putchar('*');
	}
	putchar('\n');
}
