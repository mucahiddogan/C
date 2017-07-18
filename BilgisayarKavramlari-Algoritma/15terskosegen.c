#include <stdio.h>

int main(){
     int i, j;
     int dizi[30][30];
     int size;
     printf ("enter the size: ");
     scanf ("%d", &size);
     printf ("\n");

     for (i=0;i<size;i++){
          for (j=size;j>0;j--){
               if (i==(j-1)){
                    dizi[i][j] = 1;
               } else {
                    dizi[i][j] = 0;
               }
          }
     }

     for (i=0;i<size;i++){
          for (j=size;j>0;j--){
               printf ("%d ",dizi[i][j]);
          }
          printf ("\n");
     }
}
