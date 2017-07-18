#include <stdio.h>

int main(){

    int sinir, gecici;
    int array[100];
    printf("Girilecek sayi miktari(0-100): ");
    scanf("%d", &sinir);


    for(int i=0; i<sinir; i++){
        scanf("%d", &array[i]);
    }

    for(int i=0; i<sinir; i++){
        for(int j=0; j<sinir-1-i; j++){
            if(array[j] > array[j+1]){
                gecici = array[j];
                array[j] = array[j+1];
                array[j+1] = gecici;
            }
        }
    }

    for(int i=0; i<sinir; i++)
        printf("%d ", array[i]);

    printf("\n");
    return 0;
}
