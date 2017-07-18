#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int operation(int number);

int main (){
      int number;
      srand(time(NULL));
      number = rand() % 100;
      //printf ("%d\n", number);
      operation(number);
      return 0;
}

int operation(int number){
      int entered;
      printf ("Enter a number: ");
      scanf ("%d", &entered);

      while (entered != number){
      if (entered < number){
            printf ("The number is bigger than yours\n");
            printf ("Enter new number: ");
            scanf ("%d", &entered);
            }
            else if(entered > number){
                  printf ("The number is smaller than yours\n");
                  printf ("Enter new number: ");
                  scanf ("%d", &entered);
            }
            //else if (entered == number){
            //      printf ("The number is correct.\n");
            //      break;
            //}

      } //return number;
      printf ("The number is correct.\n");
      printf ("Number is %d\n", number);
}
