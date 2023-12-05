#include <stdio.h>
#include <stdlib.h>

int validaSexo(char sexo) {
  if(sexo != 'M' && sexo != 'F') {
    printf("Sexo inválido, insira M para masculino ou F para feminino.\n");
    return 0;
  } else {
    return 1;
  }
}

int validaSalario(float salario) {
  if(salario <= 1) {
    printf("Salário inválido, insira um valor maior que 1!\n");
    return 0;
  } else {
    return 1;
  }
}

char* classificaSalario(float salario) {
  if(salario > 1400) {
    return "Salario acima do minimo";
  } else if(salario == 1400) {
    return "Salario minimo/igual";
  } else {
    return "Salario abaixo do minimo";
  }
}

void mostraClassificacao(char nome[], float salario, char sexo) {
  char* classificacao = classificaSalario(salario);
  char* sexoExtenso = (sexo == 'M') ? "masculino" : "feminino";

  printf("Nome: %s\n", nome);
  printf("Salário: R$ %.2f\n", salario);
  printf("Classificação em relação ao salário mínimo: %s\n", classificacao);
  printf("Sexo: %s\n", sexoExtenso);
}

int main() {
  int quantidadeAbaixoSalario = 0;
  int quantidadeAcimaSalario = 0;
  int quantidadeAssalariados;
  int quantidadeIgual;

  printf("Número de assalariados a serem cadastrados: \n");
  scanf("%d", &quantidadeAssalariados);


  for (int assalariado = 1; assalariado <= quantidadeAssalariados; assalariado++) {
    printf("\nAssalariado #%d\n", assalariado);


    char nome[100];
    printf("\nInforme o nome: \n");
    scanf("%s", nome);


    char sexo;
    printf("\nInsira o sexo (M para masculino ou F para feminino): \n");
    scanf(" %c", &sexo);


      while (!validaSexo(sexo)){
        printf("\nInforme novamente o sexo (M/F): \n");
        scanf(" %c", &sexo);

    }

    float salario;
    printf("Informe o salário: ");
    scanf("%f", &salario);
    while (!validaSalario(salario)) {
        printf("Informe novamente o salário: ");
        scanf("%f", &salario);
    }

   mostraClassificacao(nome, salario, sexo);

      if (salario < 1400) {
        quantidadeAbaixoSalario++;
      } else if (salario > 1400) {
        quantidadeAcimaSalario++;
      }else{
        quantidadeIgual++;
      }
    }

  printf("\nQuantidade de assalariados abaixo do salário mínimo: %d\n", quantidadeAbaixoSalario);
  printf("\nQuantidade de assalariados acima do salário mínimo: %d\n", quantidadeAcimaSalario);
  printf("\nQuantidade de assalariados com salário igual ao salário mínimo: %d\n", quantidadeIgual);

  return 0;
}