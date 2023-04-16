#include<stdio.h>
#include<string.h>

int main(){

    char nome[100], email[50], endereco[50];
    char backupnome[100], backupemail[50], backupendereco[50];

    printf("digite seus dados\n");
    printf("nome completo: ");
    fgets(nome, 100, stdin);
    printf("e-mail: ");
    fgets(email, 50, stdin);
    printf("endereco: ");
    fgets(endereco, 50, stdin);

    strcpy(backupnome, nome );
    strcpy(backupemail, email);
    strcpy(backupendereco, endereco);

    printf("backup dos dados feito com sucesso! Ola! %s", backupnome);
    printf("%s", backupemail);
    printf("%s", backupendereco);
}