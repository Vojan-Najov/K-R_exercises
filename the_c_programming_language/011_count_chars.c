#include <stdio.h>

int main(void)
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc);
	printf("amount of characters: %.0f\n", nc);

	return 0;
}
