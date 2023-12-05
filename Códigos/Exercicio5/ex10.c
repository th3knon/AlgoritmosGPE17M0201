#include <stdio.h>
#include <math.h>

//CALCULAR RAÍZES DA EQUAÇÃO DE 2° GRAU

int main() {

  int A, B, C, delta, X, X2;

  printf("Digite o valor de A: \n");
  scanf("%d", &A);

  printf("Digite o valor de B: \n");
  scanf("%d", &B);

  printf("Digite o valor de C: \n");
  scanf("%d", &C);

  delta = (B*B) - 4 * A * C;

  if(delta < 0 ){
  printf("Não existe uma raíz");
  }
   else if(delta == 0){
   X = (-B  + sqrt(delta))/2*A;
   X2 = (-B  - sqrt(delta))/2*A;
   printf("Existe uma raíz real: %d", X);
   }
   else if(delta >= 0){
   X = (-B  + sqrt(delta))/2*A;
   X2 = (-B  - sqrt(delta))/2*A;
   printf("Existe duas raízes reais: %d %d", X, X2);
   }
     else{
      printf("Raíz não encontrada");
     }
}