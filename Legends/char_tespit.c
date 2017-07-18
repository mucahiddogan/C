#include<stdio.h>
int main(){
      char metin[100];
      int i, counter=0, j=0;
      char sonlanan[100];
      int nokta;

      printf("metni girin: ");
      scanf( "%s", metin);

      printf ("kacıncı karakterden sonrası gozuksun: ");
      scanf ("%d", &nokta);

      printf("girdiginiz metin: ");
      for( i = 0; metin[i]!='\0'; i++){
            printf("%c", metin[i]);
            counter++;
      }

      int gecici = nokta;

      printf ("\n");
      printf ("%d. karakterden sonrası: ", nokta);
            for (nokta=gecici; nokta<=counter; nokta++){
                  printf ("%c", metin[nokta]);
            }
            printf ("\n");
      return 0;
}
