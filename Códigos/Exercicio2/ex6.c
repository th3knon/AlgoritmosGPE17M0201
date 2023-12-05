#include <stdio.h>
#include <stdlib.h>

int main() {
   //ex 6
  //calcular área do círculo | a= pi * r²

  double pi = 3.1415;
  double raio, area;

  printf("Digite o raio do círculo: \n");
  scanf("%lf", &raio);

  area = pi * (raio * raio);

  printf("Área do círculo é igual a: %.3lf", area);
  }