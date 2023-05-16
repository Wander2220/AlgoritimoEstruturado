#include<stdio.h>

struct Aluno{
    char nome[20];
    char telefone[20];
    char cpf[11];
    double dinheiro;
};
struct Professor{
    char nome[20];
    char telefone[20];
    char cpf[11];
    double dinheiroparamim;
};

int main(){

    struct Aluno aluno1;
    struct Professor professor1;
   
    printf("digite o nome do aluno\n");
    fgets(aluno1.nome, 20, stdin);
    printf("digite o cpf\n");
    scanf("%s", &aluno1.cpf);
    printf("digite o telefone: ");
    gets(aluno1.telefone);
    printf("digite o dinheiro disponivel\n");
    scanf("%lf", &aluno1.dinheiro);

    printf("digite o nome do professor: ");
    fgets(professor1.nome, 20, stdin);
    printf("digite o cpf\n");
    scanf("%s", &professor1.cpf);
    printf("digite o telefone: ");
    gets(professor1.telefone);
    printf("digite o dinheiro disponivel\n");
    scanf("%lf", &professor1.dinheiroparamim);






}