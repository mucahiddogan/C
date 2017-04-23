#include <stdio.h>

void sekilOlusturma();
void islemler(int satir, int sutun);

int main (void){
      int satir, sutun;

      printf ("Satiri giriniz: ");
      scanf ("%d", &satir);
      printf ("Sutunu giriniz: ");
      scanf ("%d", &sutun);

      sekilOlusturma();             //süsleme

      if (satir <= 8 && sutun <= 8){
            islemler(satir, sutun);
      }
      else{
            printf ("Girdiginiz deger aralık dısında!!!\n\n");
      }
      return 0;
}

void sekilOlusturma(){
      printf ("\n\n   ");
      for (int k=1; k<9; k++){
            printf ("%3d", k);
      }
      printf ("\n   ");
      for (int l=1; l<9; l++){
            printf ("  _");
      }
      printf ("\n\n");
}


void islemler(int satir, int sutun){
      char satranc[8][8];
      int i, j;

      for (i=1; i<9; i++){
            printf ("%d| ", i);

            for (j=1; j<9; j++){
                  if (satir == i && sutun == j){
                        printf ("%3c", satranc[i][j] = '!');
                  }
                  else if (satir == i-1 && sutun == j+2){
                        printf ("%3c", satranc[i][j] = 'o');
                  }
                  else if (satir == i-1 && sutun == j-2){
                        printf ("%3c", satranc[i][j] = 'o');
                  }
                  else if (satir == i-2 && sutun == j+1){
                        printf ("%3c", satranc[i][j] = 'o');
                  }
                  else if (satir == i-2 && sutun == j-1){
                        printf ("%3c", satranc[i][j] = 'o');
                  }
                  else if (satir == i+1 && sutun == j+2){
                        printf ("%3c", satranc[i][j] = 'o');
                  }
                  else if (satir == i+1 && sutun == j-2){
                        printf ("%3c", satranc[i][j] = 'o');
                  }
                  else if (satir == i+2 && sutun == j+1){
                        printf ("%3c", satranc[i][j] = 'o');
                  }
                  else if (satir == i+2 && sutun == j-1){
                        printf ("%3c", satranc[i][j] = 'o');
                  }
                  else{
                        printf ("%3c", satranc[i][j] = '.');
                  }
            }
            printf ("\n\n");
      }
}
