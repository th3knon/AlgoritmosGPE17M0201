#include <stdio.h>
#include <stdlib.h>

int main(){
  // exercicio 7
  int anos, meses, dias, total;

  printf("Digite sua idade em anos; \n");
  scanf("%d", &anos);

  printf("Digite sua idade em meses; \n");
  scanf("%d", &meses);

  printf("Digite sua idade em dias; \n");
  scanf("%d", &dias);

 total = (anos*365) + (meses*30) + dias;

  printf("Total de dias: %d", total);
  }