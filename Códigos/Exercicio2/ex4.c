#include <stdio.h>
#include <stdlib.h>

int main() {
   //ex 4
  //converter real em dólar
   float reais, cotacaoDolar, vConvertido;

  printf("Digite o valor em reais: \n");
  scanf("%f", &reais);

  printf("Digite a cotação do dólar: \n");
  scanf("%f", &cotacaoDolar);

  vConvertido = reais / cotacaoDolar;

  printf("O valor em dólares é de: %.2f", vConvertido);
}