//koddunyası - Toplamsal Sayı algoritması
#include<stdio.h>

int main(){

      int a, b, c;
      int number, counter=0;
      int d;
      for (number=100; number<=999; number++){
            a = number/100;
            b = (number/10)%10;
            c = (number%100)%10;
            d = b + c;
            printf ("%d %d %d\n", a, b, c);
            if (a == d){
                  counter++;
            }
      }
      printf ("\n Result: %d\n", counter);
}
