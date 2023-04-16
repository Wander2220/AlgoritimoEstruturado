#include<stdio.h>
#include<string.h>

int main(){

    char nome[50], nomemeio[50], ultimonome[50], nomecompleto[100];

    printf("digite seu primeiro nome\n");
    scanf("%s", nome);
    printf("digite o nome do meio\n");
    scanf("%s", nomemeio);
    printf("digite seu ultimo nome\n");
    scanf("%s", ultimonome);

    strcat(nomecompleto, nome);
    strcat(nomecompleto, " ");
    strcat(nomecompleto, nomemeio);
    strcat(nomecompleto, " ");
    strcat(nomecompleto, ultimonome);

    printf("seu nome completo eh: %s\n", nomecompleto);
}