#include <stdio.h>

int main (void)

{
	int number, counter, total;
	float average;
	counter = 0;
	total = 0;
	
	printf ("Enter the number: ");
	scanf ("%d", &number);
	
	while (number != EOF)
	{
		
		
		total = total + number;
		counter = counter + 1;
		
		
		
		printf ("Enter the number: ");
		scanf ("%d", &number);
		
	}
	average =(float) total / (counter);
	
	printf ("Average: %.5f", average);
	return 0;
}
