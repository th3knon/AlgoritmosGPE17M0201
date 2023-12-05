#include <stdio.h>
#include <math.h>

// Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.
//incrementar altura em cm e anos

int main() {

 float chico = 1.50; //2cm ano
 float ze = 1.10;    //3cm ano
 int ano = 0;

  while(ze<= chico){
    ze += 0.03;
    chico += 0.02;
    ano +=1;
   }

   printf("anos necessários: %d", ano);
}