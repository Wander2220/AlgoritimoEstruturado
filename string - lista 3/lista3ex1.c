#include<stdio.h>
#include<string.h>

int main(){

    char nome[50];

    printf("digite seu nome completo:\n");
    fgets(nome, 50, stdin);

    printf("seu nome tem %d caracteres", strlen(nome));
}