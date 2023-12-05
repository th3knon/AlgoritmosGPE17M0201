#include <stdio.h>

//Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item.

int main() {

   int prato, sobrem, bebida, cal = 0;
   

   printf("Escolher o prato de sua preferência: 1- Vegetariano 2- Peixe 3- Frango 4- Carne \n");
  scanf("%d", &prato);

  printf("Escolher a sobremesa de sua preferência: 1- Abacaxi 2- Sorvete Diet 3- Mouse Diet 4- Mouse chocolate \n");
  scanf("%d", &sobrem);

  printf("Escolher a bebida de sua preferência: 1- Chá 2- Suco Laranja 3- Suco Melão 4- Refrigerante Diet \n");
  scanf("%d", &bebida);

  

  switch(prato){

    case 1:
     cal = 180;
     break;

    case 2:
     cal = 230;
     break;

    case 3:
     cal = 250;
     break;

    case 4:
     cal = 350;
     break;

    default:
     printf("Código não reconhecido");
    }

  switch(sobrem){

    case 1:
     cal += 75;
     break;

    case 2:
     cal += 110;
     break;

    case 3:
     cal += 170;
     break;

    case 4:
     cal += 200;
     break;

    default:
     printf("Código não reconhecido");
    }

  switch(bebida){

    case 1:
     cal += 20;
     break;

    case 2:
     cal += 70;
     break;

    case 3:
     cal += 100;
     break;

    case 4:
     cal += 65;
     break;

    default:
     printf("Código não reconhecido");
    }

  printf("O total de calorias da refeição é de: %d", cal);
}
