#include <stdio.h>
#include <math.h>

int main() {

 int A, B, C;

  printf("Digite o primeiro número: \n");
  scanf("%d", &A);

  printf("Digite o segundo número: \n");
  scanf("%d", &B);

  printf("Digite o terceiro número: \n");
  scanf("%d", &C);

  if(A > B && A > C){
    if(B > C){
      printf("Números em ordem decrescente: %d %d %d\n", A, B, C);
    } else{
      printf("Números em ordem decrescente: %d %d %d\n", A, C, B);
    }
  }
  else if(B > A && B > C){
    if(A > C){
      printf("Números em ordem decrescente: %d %d %d\n", B, A, C);
    } else{
      printf("Números em ordem decrescente: %d %d %d\n", B, C, A);
    }
  }
  else{
    if(A > B){
      printf("Números em ordem decrescente: %d %d %d\n", C, A, B);
    } else{
      printf("Números em ordem decrescente: %d %d %d\n", C, B, A);
    }
  }
}