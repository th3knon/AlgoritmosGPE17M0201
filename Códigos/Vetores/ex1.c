#include<stdio.h>
#include <stdlib.h>

int main(){

    int A[6] = {1, 0 , 5, -2, -5, 7}, soma = 0;

    for(int i = 0; i < 6; i++){
        if( i== 0 || i == 1 || i == 5){
            soma += A[i];
        }
        if(i == 4){
            A[i] = 100;
        }
        printf("\n A: %d", A[i]);
    }

    printf("\nSoma: %d", soma);
}