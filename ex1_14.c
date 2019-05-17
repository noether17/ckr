#include <stdio.h>

#define N_BINS 256

int main()
{
	int c, bins[N_BINS];
	for (int i = 0; i < N_BINS; ++i)
		bins[i] = 0;

	while ((c = getchar()) != EOF)
		++bins[c];

	for (int i = 0; i < N_BINS; ++i)
	{
		if (bins[i] > 0)
		{
			if (i > 31 && i < 127) // printable
				printf("\'%c\': ", i);
			else
				printf("%d: ", i);
			for (int j = 0; j < bins[i]; ++j) // print bar
				putchar('*');
			putchar('\n'); // new line
		}
	}
}
