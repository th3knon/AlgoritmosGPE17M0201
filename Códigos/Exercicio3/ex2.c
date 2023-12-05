#include <stdio.h>
#include <stdlib.h>

int main() {

float salario;

printf("Digite seu salário: \n");
scanf("%f", &salario);

if(salario >= 1320){
  printf("Você ganha mais que um salário mínimo");
  }

else { 
  printf("Você ganha menos que um salário mínimo");
  }
}