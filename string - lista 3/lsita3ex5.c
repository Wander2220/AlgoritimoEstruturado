#include<stdio.h>
#include<string.h>

int main(){

char nome[60], sobrenome[60], senha[50], cpf[20];

printf("digite seu nome\n");
scanf("%s", nome);
printf("digite seu sobrenome\n");
scanf("%s", sobrenome);
printf("digite seu cpf(com pontos)\n");
scanf("%s", cpf);

strcpy(senha, nome);
strncat(senha, sobrenome, 1);
strcat(senha, cpf);
strtok(senha, ".");

printf("esta eh sua senha %s", senha);
}