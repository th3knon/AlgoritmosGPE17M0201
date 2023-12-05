#include <stdio.h>
#include <stdlib.h>

int main() {

 int num, num2;

  printf("Digite o primeiro número: \n");
  scanf("%d", &num);

   printf("Digite o segundo número: \n");
  scanf("%d", &num2);

  int soma = num + num2;
  int subt = num - num2;
  int mult = num * num2;
  int div = num / num2;

  printf("A soma dos algarismos são: %d\n", soma);

   printf("A subtração dos algarismos são: %d\n", subt);

   printf("A multiplicação dos algarismos são: %d\n", mult);

   printf("A divisão dos algarismos são: %d\n", div);
}