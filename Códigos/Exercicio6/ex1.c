#include <stdio.h>

//Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores: 

int main() {

  int ddd;

  printf("Digite seu DDD: \n");
  scanf("%d", &ddd);

  switch (ddd){

    case 61:
    printf("Brasília");
    break;

    case 71:
    printf("Salvador");
    break;

    case 11:
    printf("São Paulo");
    break;

    case 21:
    printf("Rio de Janeiro");
    break;

    case 32:
    printf("Juíz de Fora");
    break;

    case 19:
    printf("Campinas");
    break;

    case 27:
    printf("Vitória");
    break;

    case 31:
    printf("Belo Horizonte");
    break;
   
    default:
    printf("uma cidade no Brasil sem identificação");
  }
}
