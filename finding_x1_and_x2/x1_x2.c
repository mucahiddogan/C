#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)

{
	int a, b, c;
	float d, x_1, x_2;
	float total;
	
	printf ("\t\t ax'2 + bx + c\n\n");
	printf ("\nEnter a: ");
	scanf ("%d", &a);
	printf ("Enter b: ");
	scanf ("%d", &b);
	printf ("Enter c: ");
	scanf ("%d", &c);
	printf ("The Equation = (%d.x'2) + (%d.x) + (%d)\n\n", a, b, c);
	
	while (a != EOF)
	{
		
		d = (b*b) - (4*a*c);
		
		x_1 = (float) (0-b-sqrt(d)) / (2*a);
		x_2 = (float) (0-b+sqrt(d)) / (2*a);
		
		if (d < 0)
		{
			printf ("\nDelta is smaller than 0\nNo radical\n");
		}
		
		if (d == 0)
		{
			printf ("\nX1 = X2\nThe commonal radical is: %.2f\n", x_1);
		}
		
		if (d > 0)
		{
			printf ("X1 = %.2f\n", x_1);
			printf ("X2 = %.2f\n", x_2);
		}
		
		
		printf ("Enter a: ");
		scanf ("%d", &a);
		printf ("\nEnter b: ");
		scanf ("%d", &b);
		printf ("\nEnter c: ");
		scanf ("%d", &c);
	}
	
	
	return 0;
}
