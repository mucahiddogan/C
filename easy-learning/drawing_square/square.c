#include <stdio.h>
int main ()
{
	int i = 0, a, b;
	printf ("Enter the cm of the square");
	scanf ("%d", &a);

	while (i < a)
	{
		b = 0;
		while (b < a)
		{
			printf ("*");

			b++;
		}
		printf ("\n");
		++i;
	}
	return 0;
}
