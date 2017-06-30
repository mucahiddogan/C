#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 30

struct hastane{
     int sira;
     double tc;
     char name[size];
};

int main(){
     int i, j;
     struct hastane insan[size];
     int out = 0;

     for (i=0;i<4;i++){
          printf ("enter %d. person' s T.C: ",i+1);
          scanf ("%lf",&insan[i].tc);
          printf ("enter %d. person' s name: ",i+1);
          scanf ("%s",insan[i].name);
          insan[i].sira = i+1;
     }
     printf ("\n");
     for (i=0; i<4; i++){
          printf ("%d %.lf %s\n",insan[i].sira, insan[i].tc, insan[i].name);
     }

     char *output_file = "sira.txt";
     FILE *fp;
     fp = fopen(output_file,"w");

     for (i=0;i<4;i++){
          fprintf (fp,"%d %.lf %s\n",insan[i].sira, insan[i].tc, insan[i].name);
     }
     fclose(fp);
}
