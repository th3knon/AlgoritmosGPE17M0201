#include <stdio.h>
#include <math.h>

//5x + 3 / raíz quadradada de x² - 16

int main() {

 float x, raiz, numerador, denom;
 float resul;
  
  printf("Digite o valor de X: \n");
  scanf("%f", &x);

  numerador = (5*x) + 3;
  printf("numerador da operação: %.2f\n", numerador);

  denom = (x*x) - 16;
  raiz = sqrt(denom);
  printf("denominador da operação: %.2f\n", denom);

  resul = (numerador)/(denom);
  printf("f(x) = %f", resul);
}