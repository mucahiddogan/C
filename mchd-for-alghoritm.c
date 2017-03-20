#include <stdio.h>
int main (){
      int space;
      int dx, dy, dz, dt, da;
      printf ("Enter a character: ");
      char ch = getchar();
      printf ("Character is %c\n\n\n", ch);
      //for (dx=0; dx<=7; dx++){
      //      printf (" ");
      //      for (dy=0; dy<=7-dx; dy++){ //printf (" "); } //printf ("\n") }

      printf ("            %c\n          %c %c %c\n        %c %c   %c %c\n"
      "      %c %c       %c %c\n    %c %c           %c %c\n  %c %c               %c %c\n"
      "%c %c                   %c %c\n",ch,ch,ch,ch,ch,ch,ch,ch,ch,ch,ch,ch,ch,ch,ch
,ch,ch,ch,ch,ch,ch,ch,ch,ch);
      for (space=1; space<=13; space++){
            printf ("%c ",ch);
      }
      printf ("\n");
      for (space=1; space<=13; space++){
            printf ("%c ",ch);
      }
      printf ("\n\n\n");


      int hx, hy;
      for (space=1; space<=13; space++){
            printf ("%c ",ch);
      }
      printf ("\n");
      for (space=1; space<=13; space++){
            printf ("%c ",ch);
      }
      printf ("\n");
      for (hx=1; hx<=7; hx++){
            for (hy=1; hy<=11; hy++){
                  printf (" ");
            }
            printf ("%c %c",ch,ch);
            printf ("\n");
      }

      for (space=1; space<=13; space++){
            printf ("%c ",ch);
      }
            printf ("\n");
      for (space=1; space<=13; space++){
                  printf ("%c ",ch);
            }
            printf ("\n\n\n");


      int cx, cy;
      for (cx=1; cx<=7; cx++){
            printf ("%c %c",ch,ch);
            for (cy=1; cy<=19; cy++){
                  printf (" ");
            }
            printf ("%c %c",ch,ch);
            printf (" ");
            printf ("\n");
      }
      for (space=1; space<=13; space++){
            printf ("%c ",ch);
      }
      printf ("\n");
      for (space=1; space<=13; space++){
            printf ("%c ",ch);
      }
      printf ("\n\n\n");


      int  mj, ml;
      for (space=1; space<=13; space++){
            printf ("%c ",ch);
      }
      printf ("\n");
      for (space=1; space<=13; space++){
            printf ("%c ",ch);
      }
      printf ("\n");
      for (ml=6; ml>=1; ml--){
            for (mj=1; mj<=7-ml; mj++){
                  printf ("  ");
            }
            printf ("%c %c",ch,ch);
            printf ("\n");
      }
      printf ("             %c %c\n",ch,ch);
      int mx, my;
      for (mx=1; mx<=6; mx++){
            for (my=6-mx; my>=0; my--){
                  printf ("  ");
            }
            printf ("%c %c",ch,ch);
            printf ("\n");
      }
      for (space=1; space<=13; space++){
            printf ("%c ",ch);
      }
      printf ("\n");
      for (space=1; space<=13; space++){
            printf ("%c ",ch);
      }
printf ("\n");
return 0;
// scanf ile alınan değer yazdırılacak
}
