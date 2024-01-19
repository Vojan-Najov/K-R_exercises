#include <stdio.h>

#define SIZE 97

int main(void)
{
	int i, c, max;
	int frequence[SIZE];
	
	for (i = 0; i < SIZE; ++i) {
		frequence[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++frequence[SIZE - 1];
		} else if (c == '\t') {
			++frequence[SIZE - 2];
		} else if (c >= ' ' && c <= '~') {
			++frequence[c - ' '];
		}
	}

	max = 0;
	for (i = 0; i < SIZE; ++i) {
		if (max < frequence[i]) {
			max = frequence[i];
		}
	}

	while (max > 0) {
		for (i = 0; i < SIZE; ++i) {
			if (frequence[i] == max) {
				--frequence[i];
				printf("#");
			} else {
				printf(" ");
			}
		}
		printf("\n");
		--max;
	}
	for (i = 0; i < SIZE - 2; ++i) {
		printf("%c", i + ' ');
	}
	printf("tn\n");

	return 0;
}

