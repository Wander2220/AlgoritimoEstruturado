#include <stdio.h>

int main(){

int inteiro, * ptr;
float flutuante;
double flutt;
char letra;
char letras[30];

    printf("digite um numero inteiro\n");
    scanf("%d", &inteiro);
    printf("digite um flutuante\n");
    scanf("%.1f", &flutuante);
    fflush(stdin);
    printf("digite um double\n");
    scanf("%lf", &flutt);
     fflush(stdin);
    printf("digite uma letra\n");
    scanf("%c", &letra);
     fflush(stdin);
    printf("digite uma palavra\n");
    scanf("%s", &letras);
     fflush(stdin);

     ptr = &inteiro;

    printf("%d\n", inteiro);
    printf("%.1f\n", flutuante);
    printf("%lf\n", flutt);
    printf("%c\n", letra);
    printf("%s\n", letras);
    printf("%x", ptr);
    return 0;
}