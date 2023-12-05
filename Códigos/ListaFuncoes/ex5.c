#include <stdio.h>
#include <string.h>
#include <math.h>

float calcImc(){
  float peso, altura, imc;
  printf("Digite o peso: ");
  scanf("%f", &peso);
  printf("\nDigite a altura: ");
  scanf("%f", &altura);

  imc = peso/(altura*altura);
  return imc;
}
  float verSituacao(){
    float imc = calcImc();
    if(imc < 16){
      printf("Abaixo do peso recomendado");
    }
    else if(imc >= 16 && imc <= 25){
      printf("peso recomendado");
    }
    else{
      printf("Acima do peso recomendado");
    }
    return imc;
  }

 int main(){
  float imc = verSituacao();
  printf ("%f", imc);
 }