#include <stdio.h>
#include <stdlib.h>

int main() {

float qtCarros, vVendas, salarioFx, custoCarros, salarioFinal, porcentFixa = 0.05;

  printf("Digite o número de carros vendidos: \n");
  scanf("%f", &qtCarros);
  getchar();

  printf("Digite o valor total das vendas: \n");
  scanf("%f", &vVendas);
    getchar();

   printf("Digite o salário fixo: \n");
  scanf("%f", &salarioFx);
    getchar();

   printf("Insira a comissão por carros venidos: \n");
  scanf("%f", &custoCarros);
    getchar();

  salarioFinal = (qtCarros * custoCarros) + (vVendas * porcentFixa) + salarioFx;


  printf("Salário final é igual: %f", salarioFinal);
}