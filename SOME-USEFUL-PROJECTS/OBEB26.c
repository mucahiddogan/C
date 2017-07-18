#include <stdio.h>

int main(){
     int i, sayi1, sayi2;
     int obeb;

     printf ("Enter first number: ");
     scanf ("%d", &sayi1);
     printf ("Enter second number: ");
     scanf ("%d", &sayi2);

     int min;            //min i yazmaya gerek yok belirli olsun diye yaptım
     if (sayi1<sayi2){
          min = sayi1;
     } else if (sayi2 < sayi1){
          min = sayi2;
     }

     int test1, test2;
     for (i=min;i>0;i--){
          test1 = sayi1 % i;
          test2 = sayi2 % i;
          if(test1 == 0 && test2 == 0){
               printf ("obeb(ebob): %d\n", i);
               break;
          }
     }

}
