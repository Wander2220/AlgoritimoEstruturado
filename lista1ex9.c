#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

 char * nome[50];
 float salariofix;
 float totalvendas;
 float totalmes;

    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    fflush(stdin);
    printf("Digite seu salario: \n");
    scanf("%f", &salariofix);
    fflush(stdin);
    printf("Digite o total de vendas por mes em dinheiro: \n");
    scanf("%f", &totalvendas);
    fflush(stdin);

    printf("Ola %s\n", nome);
    printf("seu salario fixo eh de: %.2f\n", salariofix);
    printf("o valor de vendas ao mes em dinheiro eh de: %.2f\n", totalvendas);
    printf("O valor de comissao a receber eh: %.2f\n", totalmes = totalvendas * 15 / 100);
   
}