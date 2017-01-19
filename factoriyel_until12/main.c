#include <stdio.h>


int main (void)

{
	char b;
	int i;
	int a;
	int multiple;
	i = 0;
	a = 0;
	multiple = 1;

	printf ("Enter a number that will be factoriyel: ");
	scanf ("%d", &a);
	
	for (i = 1; i <= a; i++)
	{
		multiple *= i;
	
	}
	printf ("%d! = %d", a, multiple);

	return 0;
	
	
}
