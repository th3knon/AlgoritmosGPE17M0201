#include <stdio.h>
#include <math.h>

//a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem - OK

//b) qual a média de veículos nas cidades brasileiras - OK

//c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul - 

int main(){

int cod, veiculos, acidentes;
int maior=0, menor=0, contador=0, somaVeiculos=0, somaAcidentes=0, cidadeMaior=0, cidadeMenor=0;
int encerrar;
char cidade[50];
  
do{
      printf("Digite o nome da cidade: \n");
      getchar();
      fgets(cidade, sizeof(cidade), stdin);
      printf("Digite o código da cidade: \n");
      scanf("%d", &cod);
      printf("Digite o número de veículos de passeio: \n");
      scanf("%d", &veiculos);
      printf("Digite o número de acidentes de trânsito com vítimas:\n");
      scanf("%d", &acidentes);
      
      printf("1- para continuar execução | 0- para encerrar \n ");
      scanf("%d", &encerrar);
      printf("\n");

      somaVeiculos += veiculos;
      somaAcidentes += acidentes;

      if(acidentes > maior){
       maior = acidentes;
       cidadeMaior = cod;
       }

      if(contador == 0 ||acidentes < menor){
        menor = acidentes;
        cidadeMenor = cod;
      }

       contador++;

  
  
}while(encerrar > 0);

  float mediaVeiculos = somaVeiculos / contador;
  
  printf(" A média de veículos nas cidades é de: %.2f%% \n\n ", mediaVeiculos);
  printf(" Maior índice de acidentes: %d, referente ao código da cidade: %d\n\n ", maior, cidadeMaior);
   printf(" Menor índice de acidentes: %d, referente ao código da cidade: %d\n", menor, cidadeMenor);
  }