#include <stdio.h>
#include<locale.h>

int main() {

  char nomeCliente[50];
  int idade;
  char telefone[15];
  char cpf[15];
  char endereco[50];
  char nascimento[15];
  char email[50];
  float altura;
  float peso;


  printf("~~~~~~~~~~~~~~~~~~~~~~");
  printf("\n~~~~~~~~~~~~~~~~~~~~~~");
  printf("\n~~ Tela de Cadastro ~~");
  printf("\n~~~~~~~~~~~~~~~~~~~~~~");
  printf("\n~~~~~~~~~~~~~~~~~~~~~~");
  printf("\n\n");
  printf("~~~ Seja bem vindo!~~~");

  //recebendo dados

  printf("\n\n\nInsira seu nome: ");
  fgets(nomeCliente, 50, stdin);
  __fpurge(stdin);

  printf("\nInsira sua idade: ");
  scanf("%d", &idade);
  __fpurge(stdin);

  printf("\nInsira seu telefone: ");
  fgets(telefone, 15, stdin);

  printf("\nInsira seu CPF: ");
  fgets(cpf, 15, stdin);

  printf("\nInsira sua endereço: ");
  fgets(endereco, 50, stdin);

  printf("\nInsira seu nascimento: ");
  fgets(nascimento, 15, stdin);

  printf("\nInsira seu email: ");
  fgets(email, 50, stdin);

  printf("\nInsira seu peso: ");
  scanf("%f", &peso);

   printf("\nInsira sua altura: ");
  scanf("%f", &altura);


  //IMPRIMINDO DADOS

  printf("\nObrigado pelas informações, abaixo segue suas cadastro: ");

  printf("\n\nNome do cliente: %s", nomeCliente);

  printf("Idade do cliente: %d", idade);

  printf("Telefone do cliente: %s", telefone);

  printf("CPF do cliente: %s", cpf);

  printf("Endereço do cliente: %s", endereco);

  printf("Data de nascimento do cliente: %s", nascimento);

  printf("Email do cliente: %s", email);

  printf("Peso do cliente: %f", peso);

  printf("Altura do cliente: %f", altura);
}