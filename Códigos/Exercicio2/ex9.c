#include <stdio.h>
#include <stdlib.h>

int main() {

 float vFabrica, vFinal, impostos = 0.45, distribuidor = 0.28;

  printf("Digite o custo de fábrica do automóvel: \n");
  scanf("%f", &vFabrica);

  vFinal = (vFabrica * distribuidor) + (vFabrica * impostos) + vFabrica;

  printf("O valor do custo final do carro é: %f", vFinal);
}