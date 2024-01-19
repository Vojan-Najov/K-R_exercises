#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -40;
	upper = 40;
	step = 2;

	printf("celsius | fahr \n");
	printf("---------------\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius * (9.0f / 5.0f) + 32.0f;
		printf("%7.0f | %5.1f\n", celsius, fahr);
		celsius += step;
	}
}
