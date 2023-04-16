#include<stdio.h>

int main(){

    int valor1, valor2;

    printf("digite um valor\n");
    scanf("%d", &valor1);

    if(valor1 % 3 == 0){
        printf("divisivel por tres\n");
    }
    printf("digite outro valor\n");
    scanf("%d", &valor2);
    if (valor2 % 5 ==0)
    {
        printf("divisivel por cinco\n");
    }
}