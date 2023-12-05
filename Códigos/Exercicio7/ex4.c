#include <stdio.h>
#include <stdlib.h>
int main(){

    int qtd = 10, multiplo = 0, contador=1;

    while(multiplo <= 5){
        if(contador % 3 == 0){
            multiplo++;
        }
        contador++;
    }
}