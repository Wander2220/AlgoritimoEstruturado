#include <stdio.h>
#include <stdlib.h>

int main(){

int a, b;

printf("digite dois numeros: \n");
scanf("%d", &a);
fflush (stdin);
scanf("%d", &b);
fflush (stdin);

if (a > b){
    printf("o maior numero eh: %d\n", a);
}
else if (b > a){
    printf("o maior numero eh: %d\n", b);
}
else if (a == b){
    printf("os numeros sao iguais"); 
}
}