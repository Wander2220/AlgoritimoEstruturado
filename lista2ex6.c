#include <stdio.h>
#include <stdlib.h>

int main (){

    float alt, pesoideal;
    char sexo;

    printf("digite sua altura: \n");
    scanf("%f", &alt);
    fflush(stdin);
    printf("qual seu sexo? H para homem, M para mulher: \n");
    scanf("%c", &sexo);
    fflush(stdin);

    if(sexo=='h')
    {
        pesoideal = (72.7 * alt) - 58;
    }
     else
    {
        pesoideal = (62.1 * alt) - 44.7;
    }
        printf("esse eh seu peso ideal: %.2f kg", pesoideal);
}