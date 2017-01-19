#include <stdio.h>
int main ()
{
	float i, working_time, salary, total_salary;
	i = 0;
	total_salary = 0;
	
	while (working_time != -1)
	{
		
		printf ("\nHow many hours did worker work (For exiting press -1): ");
		scanf ("%f", &working_time);
		printf ("Enter money per hour: ");
		scanf ("%f", &salary);
		
		i = working_time - 40;
		total_salary = salary * working_time;
		
		if (working_time <= 40)
		{
			total_salary = salary * working_time;
		}
		else
		{
			total_salary = salary * working_time + i * salary / 2;
		}
		
		printf ("Total salary: %f", total_salary);
	
	}
	return 0;
}
