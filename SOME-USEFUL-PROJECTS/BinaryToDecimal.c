#include <stdio.h>
#include <math.h>

int main(){
      int sayi[100], us[100];          //us = üs
      int counter_all = 0;

      int son = 100;
      printf ("Converting binary to Decimal program\n"
      "Enter a value that bigger than 1 for quitting!!\n"
      "numaralarin arasında bosluk olacak sekilde giriniz!\n"
      "Programdan cıkmak icin \"1\" den buyuk deger giriniz\n");
      printf ("\nEnter number by number: ");

      int i;
      for (i=0; i<son; i++){
            scanf ("%d", &sayi[i]);
            if(sayi[i] > 1){
                  son = counter_all;
            }
            us[i] = counter_all;
            counter_all++;
      }

      printf ("Entered Number: ");
      for (i=0; i<son; i++){
            printf ("%d", sayi[i]);
      }
      int kalip = son -1;
      int swap;

      for (i=0; i!=kalip; i++){
            if(i>=kalip){
                  break;
            }
            swap = sayi[i];
            sayi[i] = sayi[kalip];
            sayi[kalip] = swap;
            kalip--;
      }

      float sonuc = 0;

      for (i=0; i<son; i++){
            sonuc = sonuc + sayi[i] * pow(2, us[i]);
      }
      printf ("\n\nConverted result : %.f\n", sonuc);
      return 0;
}

//Diğer dönüşümler hazırlanıyor...
