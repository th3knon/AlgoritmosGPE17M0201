#include <stdio.h>
#include <math.h>

int main() {

 int A, B, C, D;

  printf("Digite o primeiro numero: \n");
  scanf("%d", &A);

  printf("Digite o segundo numero: \n");
  scanf("%d", &B);

  printf("Digite o terceiro numero: \n");
  scanf("%d", &C);

  printf("Digite o quarto numero: \n");
  scanf("%d", &D);

  if(A > B && A > C && A > D){
    printf("O maior número é: %d \n", A);
    if(B < C && B < D){
      printf("O menor número é: %d \n", B);
    }else if (C < D){
      printf("O menor número é: %d \n", C);
    }else{
      printf("O menor número é: %d \n", D);
    }
  }
  else if (B > A && B > C && B > D){
    printf("O maior número é: %d \n", B);
    if(A < C && A < D){
      printf("O menor número é: %d \n", A);
    }else if (C < D){
      printf("O menor número é: %d \n", C);
    }else{
      printf("O menor número é: %d \n", D);
    }
  }
  else if (C > A && C > B && C > D){
    printf("O maior número é: %d \n", C);
    if(A < B && A < D){
      printf("O menor número é: %d \n", A);
    }else if (B < D){
      printf("O menor número é: %d \n", B);
    }else{
      printf("O menor número é: %d \n", D);
    }
  }
  else if (D > A && D > B && D > C){
    printf("O maior número é: %d \n", D);
    if(A < C && A < B){
      printf("O menor número é: %d \n", A);
    }else if (B < C){
      printf("O menor número é: %d \n", B);
    }else{
      printf("O maior número é: %d \n", C);
    }
  }
}