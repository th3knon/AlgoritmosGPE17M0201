#include <stdio.h>
#include <math.h>

//Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação
//1,2,3,4 = voto para os respectivos candidatos;
//5 = voto nulo
//6 = voto em branco

int main(){

  int candi1 =0, candi2=0, candi3=0, candi4=0, cNull=0, vBranco=0, voto;
  
  do{
  
  printf(" 1- João\n 2- Maria\n 3- José\n 4- Fulano\n 5- Nulo\n 6- Voto em branco\n INSIRA SEU VOTO: \n");
  scanf("%d", &voto);

  if(voto == 1)
  candi1 +=1;

  if(voto == 2)
  candi2 +=1;

  if(voto == 3)
  candi3 +=1;

  if(voto == 4)
  candi4 +=1;

  if(voto == 5)
  cNull +=1;

  if(voto == 6)
  vBranco +=1;

  }while(voto!=0);

  printf("Total de votos JOÃO: %d\n", candi1);
  printf("Total de votos MARIA: %d\n", candi2);
  printf("Total de votos JOSÉ: %d\n", candi3);
  printf("Total de votos FULANO: %d\n", candi4);
  printf("Total de votos NULO: %d\n", cNull);
  printf("Total de votos EM BRANCO: %d\n", vBranco);
  }
