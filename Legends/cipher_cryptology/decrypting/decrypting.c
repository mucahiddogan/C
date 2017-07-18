#include <stdio.h>
int main (void)
{
	int number;
	int a, b, c;
	int k, l, m;
	int x, y, z, q;
	int p, r, s, t;
	int sth;
	
	printf ("Enter the number that will be decrypt: ");
	scanf ("%d", &number);
	
	a = number / 1000;
	k = number % 1000;
	b = k / 100;
	l = k % 100;
	c = l / 10;
	m = l % 10;
	
	x = c + 3;
	y = m + 3;
	z = a + 3;
	q = b + 3;
	
	p = x % 10;
	r = y % 10;
	s = z % 10;
	t = q % 10;
	
	printf ("\n\n       Decrypted number:  %d %d %d %d\n", p, r, s, t);
	
	printf ("\n\n        Created by: MCHD\n\n\n");

	return 0;
}
