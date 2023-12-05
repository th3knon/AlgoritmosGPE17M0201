#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//if(abs(A-B) < C < (A+B))
// if(A+B > C && A+C > B && C+B > A) >>>>> FUNCIONANDO

//Ou a soma dos menores lados tem que ser maior que o terceiro lado

int main() {
  //if(abs(A-B) < C < (A+B)){
  ////escaleno todos os lados diferentes
//isósceles 2 lados iguais
//equilatero todos os lados iguais

  int A, B, C;

  printf("Digite o valor de A: \n");
  scanf("%d", &A);

  printf("Digite o valor de B: \n");
  scanf("%d", &B);

  printf("Digite o valor de C: \n");
  scanf("%d", &C);

  if(A+B > C && A+C > B && C+B > A){
    printf("Valores válidos para um triângulo!");

    if(A == B && B == C){
      printf("Triângulo equilatero");
    }
    else if(A == B || A == C){
      printf("Triângulo isósceles");
    }
    else if( A != B && B != C){
      printf("Triângulo escanleno");
    }
 }
   else
    printf("Não é um triângulo");

}