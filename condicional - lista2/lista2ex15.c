#include <stdio.h>

int main(){

    int dia;

    printf("digite um numero para representar um dia da semana(de 1 a 7)\n");
    scanf("%d", &dia);

    switch (dia)
    {
        case 1:
        printf("domingo");
        break;
        case 2:
        printf("segunda");
        break;
        case 3:
        printf("terça");
        break;
        case 4:
        printf("quarta");
        break;
        case 5:
        printf("quinta");
        break;
        case 6:
        printf("sexta");
        break;
        case 7:
        printf("sabado");
        break;
        default:
        printf("digite um numero de 1 a 7");
        break;
    }
}