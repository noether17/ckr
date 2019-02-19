#include <stdio.h>

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -100;
	upper = 200;
	step = 20;

	celsius = lower;
	printf("Celsius Fahrenheit\n");
	while (celsius <= upper)
	{
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%7.0f %10.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
