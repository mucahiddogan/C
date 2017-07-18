#include <stdio.h>

int main(){
     int i, j, k;
     int deger=0, deger1=0, deger2=0;
     int dizi[30], dizi1[30], dizi2[30];
     float total=1, total1=1, total2=1;
     float islem;
     printf ("ust degeri giriniz(buyuk): ");
     scanf ("%d", &deger);

     for (i=deger;i>0;i--){
          dizi[i] = i;
     }
     for(i=0;i<deger;i++){
          total *= dizi[i+1];
     }
     //printf("Factoriyel = %.f\n", total);
     //////////////////////////////////////////////////////
     printf ("alt degeri giriniz(kucuk): ");
     scanf ("%d", &deger1);

     for (j=deger1;j>0;j--){
          dizi1[j] = j;
     }
     for(j=0;j<deger1;j++){
          total1 *= dizi1[j+1];
     }
     //printf("Factoriyel2 = %.f\n", total1);
     ////////////////////////////////////////////////////
     deger2 = deger - deger1;

     for (k=deger2;k>0;k--){
          dizi2[k] = k;
     }
     for(k=0;k<deger2;k++){
          total2 *= dizi2[k+1];
     }
     //printf("Factoriyel3 = %.f\n", total2);
     ////////////////////////////////////////////////////
     //printf ("total:%.f total1:%.f total2:%.f\n", total, total1, total2);
     islem = total/(total1*total2);
     printf ("Al lan kombinasyon = %.f\n",islem);
}
