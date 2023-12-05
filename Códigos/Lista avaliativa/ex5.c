#include <stdio.h>
#include <math.h>

// Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula: 

int main() {

  float x1, x2, y1, y2, resul;
  float op1, op2, soma;

  printf("Digite o valor de x1: \n");
  scanf("%f", &x1);

  printf("Digite o valor de x2: \n");
  scanf("%f", &x2);

  printf("Digite o valor de y1: \n");
  scanf("%f", &y1);

  printf("Digite o valor de y2: \n");
  scanf("%f", &y2);


  op1 = (x2 - x1) * (x2 - x1);
  op2 = (y2 - y1) * (y2 - y1);
  soma = op1 + op2;
  resul = sqrt(soma);

  printf("O valor da distância é igual a: %.4f", resul);
 
