#include <stdio.h>

float celsius(float fahr);

int main(void)
{
	float fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Fahr | Celsius\n");
	printf("--------------\n");

	fahr = lower;
	while (fahr <= upper) {
		printf("%4.0f | %7.1f\n", fahr, celsius(fahr));
		fahr = fahr + step;
	}

	return 0;
}

float celsius(float fahr)
{
	return (5.0f/9.0f) * (fahr - 32.0f);
}
