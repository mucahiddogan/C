#include <stdio.h>
#include <stdlib.h>

struct student_info{
     int id;
     int grade1;
     int grade2;
     int grade3;
};

void sort(char *param1, char *param2);

int main(){
     char *input_file = "input.txt";
     char *output_file = "output.txt";

     printf ("sorting...\n");

     sort(input_file, output_file);

     return 0;
}

void sort(char *param1, char *param2){
     int i, j, size;
     FILE *fp;

     fp = fopen(param1,"r");
     fscanf(fp,"%d",&size);

     struct student_info ogrenci[size];
     struct student_info temp;

     for (i=0;i<size;i++){
          fscanf (fp,"%d %d %d %d",&ogrenci[i].id, &ogrenci[i].grade1,  &ogrenci[i].grade2, &ogrenci[i].grade3);
     }
     for (i=0;i<size;i++){
          printf ("%d %d %d %d\n",ogrenci[i].id, ogrenci[i].grade1,  ogrenci[i].grade2, ogrenci[i].grade3);
     }
     printf ("----------------------\n");
     for (i=0;i<size;i++){
               if(ogrenci[i].id > ogrenci[i+1].id){
                    temp = ogrenci[i];
                    ogrenci[i] = ogrenci[i+1];
                    ogrenci[i+1] = temp;
               }
          }

     for (i=0;i<size;i++){
          printf ("%d %d %d %d\n",ogrenci[i].id, ogrenci[i].grade1,  ogrenci[i].grade2, ogrenci[i].grade3);
     }
     fclose(fp);

     fp = fopen(param2,"w");

     for (i=0;i<size;i++){
          fprintf (fp,"%d %d %d %d\n",ogrenci[i].id, ogrenci[i].grade1,  ogrenci[i].grade2, ogrenci[i].grade3);
     }
     fclose(fp);
     // çıkan sonuç bellekteki adrese göre değişiklik gösterebilir
}
