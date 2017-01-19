#include <stdio.h>

int main (void)

{
	int day;

	
	printf ("Enter the number of day: ");
	scanf ("%d", &day);
	

		switch (day)
		{
			case 1:
				printf ("Monday = Pazartesi\n");
				break;
				
			case 2:
				printf ("Tuesday = Sali");
				break;
					
			case 3:
				printf ("Thursday = Carsamba");
				break;
			
			case 4:
				printf ("Wednesday = Persembe");
				break;
				
			case 5:
				printf ("Friday = Cuma");
				break;
				
			case 6:
				printf ("Saturday = Cumartesi");
				break;
				
			case 7:
				printf ("Sunday = Pazar");
				break;
				
			default :
				printf ("Ýt is not a day\n");
				break;
		}
		
		
		
	
	return 0;
	
}
