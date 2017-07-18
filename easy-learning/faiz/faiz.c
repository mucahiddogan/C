#include <stdio.h>
#include <math.h>

int main ()
{
	int yil;
	double miktar, anapara, oran;

	printf  ("Anaparayi giriniz: ");
	scanf ("%lf", &anapara);
	printf ("faiz oranını (0.faiz) şeklinde giriniz: ");
	scanf ("%lf", &oran);
	printf ("%4s%21s\n", "Yil", "Depozito Miktari");
	
	for (yil = 1; yil <= 10; yil++)
	{
		miktar = anapara * pow(1.0 + oran,yil);
		printf ("%3d%21.2f\n", yil, miktar);
	}
	return 0;
}
