#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159

int main(){
    
    double raio, area, volume;

    printf("Digite o valor do raio :\n");
    scanf("%lf", &raio);

    printf("o volume do raio eh: %lf\n", volume = (4.0 / 3) * pi * pow(raio, 3));
    printf("e a area do raio eh: %lf\n", area = 4 * pi * pow(raio, 2));
}