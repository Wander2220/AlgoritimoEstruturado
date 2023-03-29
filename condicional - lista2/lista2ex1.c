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
else {
    printf("mairo numero eh: %d\n", b);
}

}