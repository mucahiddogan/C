#include <stdio.h>
int main (void)
{
	int number;
	int a, b, c;
	int k, l, m;
	int f, g, h, j;
	int x, y, z, q;
	
	int sth;
	
	printf ("\n          Created by: MCHD\n\n\n");

	
	
	printf ("Enter the number that will be encrypt: ");
	scanf ("%d", &number);
	
	a = number / 1000;
	k = number  % 1000;
	b = k / 100;
	l = k % 100;
	c = l / 10; 
	m = l % 10;
	
	f = a + 7;
	g = b + 7;
	h = c + 7;
	j = m + 7;
	
	x = f % 10;
	y = g % 10;
	z = h % 10;
	q = j % 10;
	
	// x  y  z  q ===== z  q  x  y

	printf ("\n\n     Encrypted number:   %d %d %d %d\n\n\n\n", z, q, x, y);
	return 0;	
}
