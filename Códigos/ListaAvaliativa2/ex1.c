#include <stdio.h>
#include <stdlib.h>

int validaQuantidade(int quantidade) {
    if (quantidade >= 0) {
        return 1; // verdadeiro
    } else {
        printf("Insira um valor válido!\n");
        return 0; // falso
    }
}

float calculaSalario(int quantidade) {
    float salarioBase = 600.00;
    float adicional = 0.00;

    if (quantidade > 50 && quantidade <= 80) {
        adicional = (quantidade - 50) * 0.50;
    } else if (quantidade > 80) {
        adicional = (80 - 50) * 0.50 + (quantidade - 80) * 0.75;
    }
    float salarioTotal = salarioBase + adicional;
    return salarioTotal;
}

void mostraFinal() {

     int quantidadePecas;

      while (1) {
          do {
              printf("Informe a quantidade de peças fabricadas pelo funcionário (ou 0 para sair): ");
              scanf("%d", &quantidadePecas);

              if (quantidadePecas == 0) {
                  printf("Programa encerrado.\n");
                  return;
              }
          } while (!validaQuantidade(quantidadePecas));

          float salario = calculaSalario(quantidadePecas);

          printf("Salário do funcionário: R$ %.2f\n", salario);
      }
  }


int main() {
    mostraFinal();
    return 0;
}