 #include <stdio.h>
  #include <string.h>
  #include <math.h>

  void calcularVolumeEsfera(){
    float pi = 3.1415, raio, res;
    printf("Digite o raio");
    scanf("%f", &raio);

    res = (raio * raio * raio) * 1.33 * pi;
    printf("O volume da esfera é : %f", res);
  }

  int main(){
    calcularVolumeEsfera();
  }