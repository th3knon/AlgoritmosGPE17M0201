#include <stdio.h>
#include <math.h>

// Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou  superior a 7.0 pontos. 

int main() {

   float n1, n2, n3, peso = 3, soma, media;
  
  printf("Digite a nota da prova 1: \n");
  scanf("%f", &n1);

  printf("Digite a nota da prova 2: \n");
  scanf("%f", &n2);

  printf("Digite a nota da prova 3: \n");
  scanf("%f", &n3);

  soma = (n1*1) + (n2*1) + (n3*2);
  media = soma/peso;

  if(media >= 7){
    printf("O aluno está aprovado: %.2f", media);
    }
      else 
      printf("O aluno está reprovado: %.2f", media);
       }