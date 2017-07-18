#include <stdio.h>

int main()
{
    double input=0;
    printf ("Enter a number (0-170): ");
    scanf ("%lf", &input);
    double fac=1;
    double i;
    for (i=1; i <= input; i++)
    {
        fac = fac * i;
    }
    printf ("%.0lf! = %.0lf",input, fac);
    return 0;
}
