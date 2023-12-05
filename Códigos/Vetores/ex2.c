#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[6];

    for(int i = 0; i < 6; i++){
        printf("Digite o numero");
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < 6; i++){
        printf("\nVetor[%d]: %d ", i, vetor[i]);
    }
}