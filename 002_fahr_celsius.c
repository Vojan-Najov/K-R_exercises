#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Fahr | Celsius\n");
	printf("--------------\n");

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0f/9.0f) * (fahr - 32.0f);
		printf("%4.0f | %7.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
