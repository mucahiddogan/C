#include <stdio.h>
int main ()
{
	int number, a, b, c, d;
	int k, l, m, n;
	printf ("Enter the number: ");
	scanf ("%d", &number);
	
	a = number / 10000;
	k = number % 10000;
	b = k / 1000;
	l = k % 1000;
	c = l / 100;
	m = l % 100;
	d = m /10;
	n = m % 10;
	
	
	printf ("%d %d %d %d %d\n", a, b, c, d, n);

	if (a == n)
	if (b == d)
	{
	printf ("Palindrome number\n"); 
	}

	return 0;
}
