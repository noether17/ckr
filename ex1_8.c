#include <stdio.h>

main()
{
	int c, nl, b, t;
	c = nl = b = t = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			++nl;
		if (c == ' ')
			++b;
		if (c == '\t')
			++t;
	}
	printf("Lines: %d; Tabs: %d; Spaces: %d\n", nl, t, b);
}
