#include <stdio.h>

int main()
{
       int sayi, yedek, tersi;
       tersi = 0;
       printf ("Sayı gir: ");
       scanf("%d",&sayi);

       yedek = sayi;

       while(sayi != 0)
       {
             tersi = tersi * 10 + (sayi % 10);

             sayi = sayi / 10;
       }

       if(yedek == tersi)
            printf("%d palindromdur \n", tersi);

       else
            printf("%d palindrom değil \n", tersi);

       return 0;
}
