#include <stdio.h>
int main ()
{
	int i, x, y, exponent;
	i = 1;
	exponent = 1;
	printf ("Enter the number and exponent:  ");
	scanf ("%d%d", &x, &y);
	
	while (i <= y)
	{
		exponent = exponent * x;
		i = i +1;
	}
	
	printf ("%d", exponent);
	return 0;
}
