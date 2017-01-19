#include <stdio.h>

int main (void)

{
	int i, counter;
	counter = 0;
	i = 0;

	
	while (counter < 20)
	{
		counter = counter +1;
	
		printf ("%d", counter);
		i = counter % 5;
		
		if (i == 0)
		{
			printf ("\n");
		}
		else if (i != 0)
		{
			printf ("\t");
		}
	}
	
	return 0;
}
