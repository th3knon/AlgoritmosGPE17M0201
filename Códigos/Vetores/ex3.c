#include<stdio.h>
#include<math.h>

int main(){

    float x[5], y[5];

    for(int i = 0; i < 5; i++){
        printf("\nDigite o numeros do vetor x: ");
        scanf("%f", &x[i]);
        y[i] = x[i] * x[i];
        //y[i] = pow(x[i], 2);
    }
    for(int i = 0; i < 5; i++){
        printf("\nValores de x[%d] = %.2f e Valores de y[%d] = %.2f", i,x[i], i, y[i] );
    }
}
