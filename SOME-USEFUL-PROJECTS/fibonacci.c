#include <stdio.h>

int fibonacci(int entered);

int main(){
      int number = 0, total, number2, counter = 0, entered;
      printf ("Enter the number: ");
      scanf ("%d", &entered);
      total = fibonacci(entered);
      printf ("Fibonacci is: %d\n", total);
      return 0;
}

int fibonacci(int entered){
      int counter = 0;
      int number = 0, number2 = 1, total;
      while (counter < entered - 2){
            //number2 = number + 1;
            total = number2 + number;
            number = number2;
            number2 = total;  //number++;
            counter++;
      }
      return total;
}

/* fibonacci
1 = 0
2 = 1
3 = 1
4 = 2
5 = 3
6 = 5
7 = 8
8 = 13
*/
