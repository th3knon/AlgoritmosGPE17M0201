#include <stdio.h>


int main() {

  int cod;
  double valor, qntd;

  printf("Digite o código do pedido: \n");
  scanf("%d", &cod);

  printf("Digite a quantidade: \n");
  scanf("%lf", &qntd);

  switch(cod){
    case 100:
    valor = 10.10 * qntd;
    break;

    case 101:
    valor = 8.30 * qntd;
    break;

    case 102:
    valor = 8.50 * qntd;
    break;

    case 103:
    valor = 12.50 * qntd;
    break;

    case 104:
    valor = 13.25 * qntd;
    break;

    default:
    printf("Não foi possível reconhecer o código");
}

  printf("O valor a ser pago é de: %.2lf", valor);

  return 0;
}