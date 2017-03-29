#include <stdio.h>
int equation(int number);
int main (){
      int number;

      printf ("Enter a number: ");
      scanf ("%d", &number);
      if (number == 2){
            printf ("2 is the smallest prime number\n");
      }
      equation(number);
      return 0;
}

int equation(int number){
      int counter = 2;
      int result;
      while (counter < number){
            result = number % counter;
            if (result == 0){
                  printf ("%d isn't prime, divided by %d \n", number, counter);
                  break;
            }
            else {
                  counter++;
                  printf ("%d is prime\n", number);
            }
      }
      return result;
}
