#include <stdio.h>
#include <stdlib.h>

int main(){

    int impar=1, contador= 1, numero;

    printf("Digite um numero");
    scanf("%d", &numero);

      for(int i = 1; i <= numero; i++){
        printf("%d\n", impar);
        impar += 2;
    }

}