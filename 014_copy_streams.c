#include <stdio.h>

int main(void)
{
	int c, prev_c;

	prev_c = 0;
	while ((c = getchar()) != EOF) {
		if (c != ' ' || (c == ' ' && prev_c != ' ')) {
			putchar(c);
		}
		prev_c = c;
	}

	return 0;
}
