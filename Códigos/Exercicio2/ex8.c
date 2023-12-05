#include <stdio.h>
#include <stdlib.h>

int main() {

  float salario, reajuste, porcent, newsal;


  printf("Digite seu salário mensal atual: \n");
  scanf("%f", &salario);

  printf("Insira a porcentagem do reajuste: \n");
  scanf("%f", &reajuste);

  porcent = reajuste/100;

  newsal = (salario * porcent) + salario;

  printf("Valor do novo salário: %f", newsal);
}