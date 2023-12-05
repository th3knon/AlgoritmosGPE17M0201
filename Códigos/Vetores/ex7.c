#include<stdio.h>
#include <stdlib.h>

int main(){

    int vetor[5], maior, pMaior = 0;

    for(int i = 0 ; i < 5; i++){
        printf("\nDigite os numeros");
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];

    for(int i = 0 ; i < 5; i++){
        printf("\n%d",vetor[i]);
        if(vetor[i] > maior){
            maior = vetor[i];
            pMaior = i;
        }
    }
     printf("\n\nMaior: %d esta na posicao %d", maior, pMaior);
}