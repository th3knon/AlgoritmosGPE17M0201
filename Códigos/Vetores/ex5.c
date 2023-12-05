#include<stdio.h>
#include<stdlib.h>

int main(){

    int vetor[5], qtdPares = 0;

    for(int i = 0 ; i < 5; i++){
        printf("\nDigite os numeros");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            printf("\nNumero inserido par: %d", vetor[i]);
            qtdPares++;
        }else{
             printf("\nNumero inserido impar: %d", vetor[i]);
        }
    }
    printf("Quantidade de pares: %d", qtdPares);

}