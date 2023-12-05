#include <stdio.h>
#include <stdlib.h>

int main() {
   //ex 5
  //calcular mercadoria
   float custo, vFrete, vDespesa, vVenda, soma, porcLucro, lucro;

  printf("Digite o valor de custo da mercadoria: \n");
  scanf("%f", &custo);
  __fpurge(stdin);

   printf("Digite o valor do frete: \n");
  scanf("%f", &vFrete);
  __fpurge(stdin);

   printf("Digite o valor das despesas da mercadoria: \n");
  scanf("%f", &vDespesa);
  __fpurge(stdin);

   printf("Digite o valor da venda: \n");
  scanf("%f", &vVenda);
  __fpurge(stdin);

  soma = custo + vFrete + vDespesa;

  lucro = (vVenda - soma);

  porcLucro = ((soma / lucro)*100);

  printf("A porcentagem de lucro é: %.2f%%", lucro);
  }