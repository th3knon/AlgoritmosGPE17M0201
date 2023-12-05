#include <stdio.h>
#include <stdlib.h>

int main(){
   //ex 3
  //Calcular área de uma sala | largura x comprimento

  float largura, comprimento, area;

  printf("Digite a largura da sala: \n");
  scanf("%f", &largura);

  printf("Digite o comprimento da sala: \n");
  scanf("%f", &comprimento);

  area = largura * comprimento;

  printf("O valor da área é de: %f", area);
 }