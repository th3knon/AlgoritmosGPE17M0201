#include <stdio.h>
#include <math.h>

int main() {

int num, raiz, quadrado;
  
printf("Digite um número qualquer: \n");
scanf("%d", &num);

  if(num >= 0){
    raiz = sqrt(num);
    printf("Raíz quadrada do número é: %d\n", raiz);
    }

  else{
    quadrado = num*num;
    printf("O quadrado do número é: %d\n", quadrado);
     }
}