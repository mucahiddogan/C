 #include <stdio.h>

int main(){
     int i, j, k;
     int kalan = 0;
     int kalan2 = 0;
     int dizi[10], dizi2[10];

     for (i=0;i<100; i++){
          kalan = i%15;
          if (kalan == 0){
               dizi[k] = i;
               k++;
          }
     }


     k = 0;
     for(j=0;j<30;j++){
          kalan2 = j%5;
          if (kalan2 == 0){
               dizi2[k] = j;
               k++;
          }
     }

     for (k=0; k<6; k++){
          printf ("%d%5d\n", dizi[k], dizi2[k]);
     }
}
