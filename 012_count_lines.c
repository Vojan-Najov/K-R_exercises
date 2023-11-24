#include <stdio.h>

int main(void)
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		}
	}
	printf("Amount of lines: %d\n", nl);

	return 0;
}
