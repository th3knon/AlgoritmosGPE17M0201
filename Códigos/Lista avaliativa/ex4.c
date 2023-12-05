#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main() {

  //"Um triângulo é conhecido como acutângulo quando os seus três ângulos são agudos, ou seja, menores que 90º

  //"Um triângulo é retângulo quando um de seus ângulos é reto, ou seja, igual a 90º. Como a soma dos três ângulos é sempre igual a 180º, os demais ângulos são necessariamente agudos."

//"Um triângulo é obtusângulo quando um de seus ângulos é obtuso, ou seja, maior que 90º. Os demais ângulos são necessariamente agudos"
 int A1, A2, A3;

  printf("Digite o valor do primeiro ângulo: \n");
  scanf("%d", &A1);

  printf("Digite o valor do segundo ângulo: \n");
  scanf("%d", &A2);

  printf("Digite o valor do terceiro ângulo: \n");
  scanf("%d", &A3);

  if(A1 + A2 + A3 == 180){
    printf("Valores válidos para um triângulo! \n");

    if(A1<90 && A2<90 && A3<90){
      printf("Triângulo Acutângulo");
    }
    else if(A1==90 || A2==90 || A3==90){
      printf("Triângulo retângulo");
    }
    else if(A1>90 || A2>90 || A3>90){
      printf("Triângulo obtusângulo");
    }
 }
   else
    printf("Não é um triângulo");
