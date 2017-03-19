#include <stdio.h>
int main(){
int i, number, min = 0, max = 0, counter;
printf ("How many number do you want to enter: ");
scanf ("%d", &counter);
if (counter == 0){
	printf ("Np Try again\n");
}
	else {
	for(i=0; i<counter; i++){
		printf ("Enter %d. number: ", i+1);
		scanf ("%d", &number);

				if (i == 0){
					max = number;
					min = number;
				}
				if (number < min)
                        	min = number;

				if (number > max)
					max = number;
				}
			}
	printf ("%d %d\n", max, min);
	float average = (max + min) / 2;
	int total = max + min;
printf ("max + min = %d\n", total);
printf ("Average of max and min is:%.1f\n", average);
return 0;
}
