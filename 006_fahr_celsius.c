#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void)
{
	int fahr;

	printf("fahr | celsius\n");
	printf("--------------\n");
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
		printf("%4d | %6.1f\n", fahr, (5.0f/9.0f)*(fahr-32));
	}
}
