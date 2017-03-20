#include <stdio.h>
int main (){
      int space;
      int dx, dy, dz, dt, da;

      //for (dx=0; dx<=7; dx++){
      //      printf (" ");
      //      for (dy=0; dy<=7-dx; dy++){
      //            printf (" ");
      //      }
      //      printf ("\n");
      //}
      printf ("            *\n          * * *\n        * *   * *\n"
      "      * *       * *\n    * *           * *\n  * *               * *\n"
      "* *                   * *\n");
      for (space=1; space<=13; space++){
            printf ("* ");
      }
      printf ("\n");
      for (space=1; space<=13; space++){
            printf ("* ");
      }
      printf ("\n\n\n");


      int hx, hy;
      for (space=1; space<=13; space++){
            printf ("* ");
      }
      printf ("\n");
      for (space=1; space<=13; space++){
            printf ("* ");
      }
      printf ("\n");
      for (hx=1; hx<=7; hx++){
            for (hy=1; hy<=11; hy++){
                  printf (" ");
            }
            printf ("* *");
            printf ("\n");
      }

      for (space=1; space<=13; space++){
            printf ("* ");
      }
            printf ("\n");
      for (space=1; space<=13; space++){
                  printf ("* ");
            }
            printf ("\n\n\n");


      int cx, cy;
      for (cx=1; cx<=7; cx++){
            printf ("* *");
            for (cy=1; cy<=19; cy++){
                  printf (" ");
            }
            printf ("* *");
            printf (" ");
            printf ("\n");
      }
      for (space=1; space<=13; space++){
            printf ("* ");
      }
      printf ("\n");
      for (space=1; space<=13; space++){
            printf ("* ");
      }
      printf ("\n\n\n");


      int  mj, ml;
      for (space=1; space<=13; space++){
            printf ("* ");
      }
      printf ("\n");
      for (space=1; space<=13; space++){
            printf ("* ");
      }
      printf ("\n");
      for (ml=6; ml>=1; ml--){
            for (mj=1; mj<=7-ml; mj++){
                  printf ("  ");
            }
            printf ("* *");
            printf ("\n");
      }
      printf ("             * *\n");
      int mx, my;
      for (mx=1; mx<=6; mx++){
            for (my=6-mx; my>=0; my--){
                  printf ("  ");
            }
            printf ("* *");
            printf ("\n");
      }
      for (space=1; space<=13; space++){
            printf ("* ");
      }
      printf ("\n");
      for (space=1; space<=13; space++){
            printf ("* ");
      }
printf ("\n");
return 0;
// scanf ile alınan değer yazdırılacak
}
