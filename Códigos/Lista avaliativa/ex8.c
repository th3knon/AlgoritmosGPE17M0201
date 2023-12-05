#include <stdio.h>
#include <math.h>
//média salário - ok
//média filhos - ok
//maior salário - ok

int main() {

  float sal, medSal, medFilhos;
  int filhos;
  int pessoas100 = 0; //salário até 100
  int somaFilhos =0;
  int contador=0;
  float somaSal =0;
  float maiorSal;
  

  do{
    
    printf("Digite o salário: \n");
    scanf("%f", &sal);

    printf("Digite o número de filhos: \n");
    scanf("%d", &filhos);

    somaSal += sal;
    somaFilhos += filhos;

    contador++;

    if(sal > maiorSal){
      maiorSal = sal;
    }

    if(sal <= 100){
      pessoas100++;
    }

    } while(sal > 0);

     medSal = somaSal/contador;
     medFilhos = somaFilhos/contador;

     float percent = ((float)pessoas100/contador) * 100;

     printf("\nMédia de salário da população: %f\n", medSal);

     printf("\nMédia de filhos da população: %f\n", medFilhos);

     printf("\nMaior salário digitado: %f\n", maiorSal);

     printf("\nPercentual de pessoas com salário até 100: %.2f%%\n", percent);
  }
  