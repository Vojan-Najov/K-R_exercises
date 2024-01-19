#include <stdio.h>

int main(void)
{
	int fahr;

	printf("fahr | celsius\n");
	printf("--------------\n");
	for (fahr = 0; fahr <= 300; fahr += 20) {
		printf("%4d | %6.1f\n", fahr, (5.0f / 9.0) * (fahr - 32));
	}
}
