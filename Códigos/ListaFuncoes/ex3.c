#include <stdio.h>
  #include <string.h>

  float calcularVolume(float raio, float altura){
    float pi = 3.1415;
    float volume = pi*(raio*raio)*altura;
    return volume;
  }

  int main(){
  float r = 10, a = 12;
  float result = calcularVolume(10, 12);
  printf("O volume é: %f", result);
  }