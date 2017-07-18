#include <stdio.h>


int main (void)

{
	int i = 0;
	int point = 0, total_point = 0;
	float average = 0;

	do 
	{
			
	printf ("Enter %d. point: ", i + 1);
	scanf ("%d", &point);
	
	if (point == EOF)
	{
		break;
	}
	if (point < 0)
	{
		printf ("Point mustn't be smaller than 0!\n");
		printf ("Enter the point again\n");
		continue;
	}
	
	else 
	{
		total_point += point;
		i++;
	}
	
	}
	while (point != EOF);
	{
	average = (float) total_point / i;
	}
	
	printf ("Average of the class is: %f", average);
	
	return 0;
}
