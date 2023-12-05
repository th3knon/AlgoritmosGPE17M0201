#include<stdio.h>
#include <stdlib.h>

int main(){

    int vetor[5];

    for(int i = 0 ; i < 5; i++){
        printf("\nDigite os numeros");
        scanf("%d", &vetor[i]);
    }

    for(int i = 4 ; i >= 0; i--){
        printf("\n%d",vetor[i]);
    }

}