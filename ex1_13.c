#include <stdio.h>

#define IN 1
#define OUT 0
#define N_BINS 10

main()
{
	int c, state, cur_length, bins[N_BINS];
	state = OUT;
	cur_length = 0;
	for (int i = 0; i < N_BINS; ++i)
		bins[i] = 0;
	
	while ((c = getchar()) != EOF)
	{
		if ( !(c == ' ' || c == '\n' || c == '\t')) // not whitespace
		{
			state = IN;
			++cur_length;
		}
		else if (state == IN) // reached end of word
		{
			state = OUT;
			if (cur_length < N_BINS)
				++bins[cur_length];
			cur_length = 0;
		}
		else
			;
	}

	for (int i = 0; i < N_BINS; ++i)
	{
		printf("%d: ", i);
		while (bins[i] > 0)
		{
			putchar('*');
			--bins[i];
		}
		putchar('\n');
	}
}
