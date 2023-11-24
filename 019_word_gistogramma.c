#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
	int c, i, j, state, length;
	int count[80];

	length = 0;
	state = OUT;
	for (i = 0; i < 80; ++i) {
		count[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		} else if (state == OUT) {
			state = IN;
		}

		if (state == IN) {
			++length;
		} else if (length != 0 && length < 80) {
			++count[length - 1];
			length = 0;
		}
	}

	for (i = 0; i < 80; ++i) {
		printf("%2d: ", i + 1);
		for (j = 0; j < count[i]; ++j) {
			putchar('|');
		}
		putchar('\n');
	}

	return 0;
}
