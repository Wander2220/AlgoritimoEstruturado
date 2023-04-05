#include<stdio.h>

int main(){

 float x, y, result;
 char operacao;

 printf("digite a operacao a ser feita (+, -, * ou /)\n");
 scanf("%c", &operacao);
 printf("digite o primeiro valor\n");
 scanf("%f", &x);
 printf("digite o segundo valor\n");
 scanf("%f", &y);

    switch (operacao)
    {
    case '+':
    printf("%.2f + %.2f = %.2f", x, y, result = x + y);
    break;
    case '-':
    printf("%.2f - %.2f = %.2f", x, y, result = x - y);
    break;
    case '*':
    printf("%.2f * %.2f = %.2f", x, y, result = x * y);
    break;
    case '/':
    printf("%.2f / %.2f = %.2f", x, y, result = x / y);
    break;
    default:
    printf("digite uma operacao valida");
        break;
    }
}