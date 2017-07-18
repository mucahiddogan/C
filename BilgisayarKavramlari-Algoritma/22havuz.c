#include <stdio.h>
#include <math.h>
int main(){
     float musluk, total, size;
     int i, adet[30];
     printf ("Kac tane musluk olacak: ");
     scanf ("%f", &size);

     for (i=0; i<size; i++){
          printf ("%d. musluk kac saatte doldurur: ", i+1);
          scanf ("%d", &adet[i]);
     }
     printf ("%lu", sizeof(adet));
     musluk = 0;
     for(i=0;i<size;i++){
          musluk += pow(adet[i], 0-1);
          //printf ("%d\nmusluk %.3f\n", adet[i],musluk);
     }

     total = 1 / musluk;

     printf ("\n%d musluk %.3f saatte doldurur\n", i, total);
     float dk = 60 * total;
     printf ("%.3f saat = %.3f dakika\n", total, dk);
}
