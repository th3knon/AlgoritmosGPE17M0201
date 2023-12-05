#include <stdio.h>
#include <math.h>

//Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10

//Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.

int main() {

int alunos =1;
float medias =0;
float Mgeral;

  while(alunos <= 30){

    float n1, n2, n3;
    
    
    printf("Digite sua primeira nota: \n");
    scanf("%f", &n1);

    printf("Digite sua segunda nota: \n");
    scanf("%f", &n2);

    printf("Digite sua terceira nota: \n");
    scanf("%f", &n3);

    float MP = ( n1*2 + n2*4 + n3*3 ) / 10;
    printf("\n");
    
      printf("Média ponderada aluno %d = %.2f \n\n", alunos, MP);
      medias += MP;

    if(MP >= 7){
      printf("Aluno aprovado! \n");
      }
    else{
      printf("Aluno reprovado \n");
    }

    alunos += 1;
    }
    
     Mgeral = medias/alunos;

    printf("A média geral da turma é de = %.2f", Mgeral);
  
}