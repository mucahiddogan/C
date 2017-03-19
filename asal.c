#include <stdio.h>
int main (){
      int number, i = 1, flag = 0;
      printf ("Enter number: ");
      scanf ("%d", &number);

      while (i<number-1){
            i++;
            if (number % i == 0){
                  flag = 1;
                  break;
            }
      }

      if (flag == 0){
            printf ("Entered number is a prime number\n");
      }
      else {
            printf ("Entered number is not a prime number\n");
      }
      return 0;
}
