#include<stdio.h>
int main ()
{
	int i, a;
	i = 1;
	while (i <= 1000000000)
	{
	
	a = i * 2;
	i = i * 2;
	printf ("%d\n", a);
	
	}
	return 0;
}
