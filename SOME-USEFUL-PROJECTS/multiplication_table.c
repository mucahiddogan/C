#include <stdio.h>
int main(){
      int i, j, carpi = 1;
      while (carpi <= 10){
            printf ("%4d*", carpi);
            carpi++;
      }
      printf ("\n");
      //printf ("\n  *1   *2   *3   *4   *5   *6   *7   *8   *9  *10\n");
      for (i=1; i<=10; i++){
            printf ("\n");
            for (j=1; j<=10; j++){
                  printf ("%4d ", i*j);
            }
      }
      printf ("\n");
      return 0;
}
