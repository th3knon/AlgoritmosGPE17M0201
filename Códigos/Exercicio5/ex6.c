#include <stdio.h>
#include <math.h>

//Codifique um programa que lê um número inteiro. A seguir o programa deve imprimir uma mensagem para o usuário dizendo se o número digitado é par. Se o número não for par, o programa não deve fazer nada.

int main() {

   int num;
  
  printf("Digite um número qualquer: \n");
  scanf("%d", &num);

  if(num % 2 == 0 ){
    printf("O número é par");
    }

}