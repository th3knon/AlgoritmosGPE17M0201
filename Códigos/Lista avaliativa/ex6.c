#include <stdio.h>
#include <math.h>

// Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.

int main() {

  float X, Y;

  printf("Digite as coordenadas X e Y do plano cartesiano: \n");
 
  printf("Valor de X: \n");
  scanf("%f", &X);

   printf("Valor de Y: \n");
  scanf("%f", &Y);
    
    if(X > 0 && Y > 0){                  //Q1 se x e y forem +
       printf("Primeiro quadrante!");
    }
      else if(X < 0 && Y > 0){           //Q2 se x<0 e y +
        printf("Segundo quadrante!");
      }
      else if(X < 0 && Y < 0){           //Q3 se x e y <0
        printf("Terceiro quadrante!");
      }
      else if(X > 0 && Y < 0){           //Q4 se x>0 e y-
        printf("Quarto quadrante!");
      }
      else if(X == 0 && Y > 0 || Y < 0){
        printf("Sobre o eixo Y");
      }
      else if(Y == 0 && X > 0 || X < 0){
        printf("Sobre o eixo X");
      }
        else{
        printf("ORIGEM");
       }
  
}