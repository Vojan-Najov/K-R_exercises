#include <stdio.h>

int main(void)
{
	int c, sc, tc, nc;

	sc = tc = nc = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++sc;
		} else if (c == '\t') {
			++tc;
		} else if (c == '\n') {
			++nc;
		}
	}
	printf("Amount of spaces: %d, of tabs: %d, of lines: %d\n", sc, tc, nc);

	return 0;
}
