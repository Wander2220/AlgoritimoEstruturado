#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario, valorprest;
    
    printf("digite seu salario: \n");
    scanf("%f", &salario);
    printf("digite o valor da prestacao: \n");
    scanf("%f", &valorprest);

    if (salario = salario * 20 / 100 < valorprest)
    {
        printf("emprestimo nao concedido!");
    }
    else 
    {
        printf("emprestimo concedido!");
    }
    return 0;
}