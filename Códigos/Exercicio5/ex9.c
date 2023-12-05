#include <stdio.h>


int main() {

  float salAtual, tempoServico, rj1, rj2, rj3, rj4, rj5, bonus;

  printf("Digite seu salário atual: \n");
  scanf("%f", &salAtual);

  printf("Digite seu tempo de serviço: \n");
  scanf("%f", &tempoServico);

  
   //Situação reajuste de 25% (salário até 500) TS abaixo de 1
  if(salAtual <= 500 && tempoServico <= 1){
    rj1 = salAtual * 1.25;
    printf("Seu salário com reajuste é de: %f", rj1);
    }
    //Situação reajuste de 20% (salário até 1000) TS 1 a 3 anos
    else if(salAtual <= 1000 && tempoServico <=3){
    rj2 = (salAtual * 1.2) + 100;
    printf("Seu salário com reajuste é de: %f", rj2);
    }
    //Situação reajuste de 15% (até 1500) TS 4 a 6
    else if(salAtual <= 1500 && tempoServico >= 4 && 
    tempoServico <=6){
    rj3 = (salAtual * 1.15) + 200;
    printf("Seu salário com reajuste é de: %f", rj3);
    }
     //Situação reajuste de 10% (até 2000) TS 7 a 10
    else if(salAtual <= 2000 && tempoServico >= 7 && 
    tempoServico <= 10){
    rj4 = (salAtual * 1.1) + 300;
    printf("Seu salário com reajuste é de: %f", rj4);
    }
     //Situação sem reajuste (acima de 2000) TS maior q 10
    else if (salAtual > 2000 && tempoServico >10){
    rj5 = salAtual + 500;
    printf("Seu salário com reajuste é de: %f", rj5);
    }
      else { 
        printf("Sem direito de aumento salarial");
      }
  }