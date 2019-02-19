#include <stdio.h>

main()
{
	int c, s_count = 0;

	while((c = getchar()) != EOF)
	{
		if (c != ' ')
			s_count = 0;
		else
			++s_count;
		
		if (s_count <= 1)
			putchar(c);
	}
}
