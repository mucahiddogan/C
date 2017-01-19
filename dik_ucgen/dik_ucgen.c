#include <stdio.h>

int main (void)

{
	int i, j, total;
	
	for (i=0; i<10; i++)
	{
		
		
		for (j=0; j<=i; j++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	return 0;
}
