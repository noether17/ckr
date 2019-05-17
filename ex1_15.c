#include <stdio.h>

int celsius(int fahrenheit);

int main()
{
	int fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		printf("%d\t%d\n", fahr, celsius(fahr));
		fahr = fahr + step;
	}
}

int celsius(int fahrenheit)
{
	return 5 * (fahrenheit - 32) / 9;
}
