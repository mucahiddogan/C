#include <stdio.h>
void sayilariOku(int dizi[], int boyut);
float ortalamaBul(int dizi[], int boyut);
int main(){
      int sayilar[10];
      sayilariOku(sayilar, 10);
      float sonuc = ortalamaBul(sayilar, 10);
      printf ("%f", sonuc);
      return 0;
}

void sayilariOku(int dizi[], int boyut){
      int i;
      for (i=0; i<boyut; i++){
            scanf ("%d", &dizi[i]);
      }
}

float ortalamaBul(int dizi[], int boyut){
      int i, toplam = 0;
      for (i=0; i<boyut; i++){
            toplam = toplam + dizi[i];
      }
      return (float)toplam / i;
}
