#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float num, positivo;

    printf("digite um numero: \n");
    scanf("%f", &num);

    if(num > 0){
        printf("o numero digitado eh positivo, ao quadrado eh %.1f e a raiz quadrada dele eh %.2f ", pow(num, 2), sqrt(num));
    }
    else {
        printf("");
    }
}
