#include<stdio.h>

int main(){
	char metin[30];
	int i, counter=0;
	printf("metni girin: ");
	scanf( "%s", metin);

	printf("girdiginiz metin: ");
	for( i = 0; metin[i]!='\0'; i++){
		printf("%c", metin[i]);
            counter++;
      }
	printf("\n%d\n", counter);

	return 0;
}
