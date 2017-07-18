#include <stdio.h>

int main(){
     int deger = 0, i, j;
     int dizi[30];
     float total = 1;
     printf ("deger girin: ");
     scanf ("%d", &deger);

     for (i=deger;i>0;i--){
          dizi[i] = i;
     }
     for(i=0;i<deger;i++){
          total *= dizi[i+1];
     }
     printf("Factoriyel = %.f\n", total);
}
