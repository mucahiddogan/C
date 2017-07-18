#include <stdio.h>

int main (void)

{
	int i, j;

	for (i=10; i>0; i--)
	{
		for (j=0; j<i; j++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	return 0;
}
