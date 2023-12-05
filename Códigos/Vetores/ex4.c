
#include<stdio.h>
#include <math.h>

int main(){

    int vetor[8], x, y, soma = 0;

    
    for(int i = 0; i < 8; i++){
        printf("Digite os numeros");
        scanf("%d", &vetor[i]);
    }
    
    do{
        printf("Digite os valores de x e y");
        scanf("%d", &x);
        scanf("%d", &y);

        if((x >= 0 && x < 8) && (y >= 0 && y < 8)){
            for(int i = 0; i < 8; i++){
                if(x == i){
                    soma += vetor[i];
                }
                if(y == i){
                    soma += vetor[i];
                }
            }
        }else{
            printf("\nIndices nao encontrados. Digite novamente");
        }
        fflush(stdin);
    }while((x < 0 || x > 7) && (y < 0 || y > 7));

    printf("Soma: %d", soma);


}