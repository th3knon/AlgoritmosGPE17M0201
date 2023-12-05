#include <stdio.h>
#include <math.h>

// Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar. As condições para aposentadoria são: • Ter pelo menos 65 anos; • Ou ter trabalhado pelo menos 30 anos;, • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.  

int main() {

int idade, tempoServico; 

 printf("Digite sua idade: \n");
 scanf("%d", &idade);

 printf("Digite seu tempo de serviço: \n");
 scanf("%d", &tempoServico);

  if(idade >= 65 || tempoServico >= 30){
    printf("Aposentadoria é possível");
    }
      else if(idade >= 60 && tempoServico >= 25){
        printf("Aposentadoria é possível");
     }
       else
        printf("Aposentadoria não é possível");
}