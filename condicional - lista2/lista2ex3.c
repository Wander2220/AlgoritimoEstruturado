#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;

    printf("digite um numero: \n");
    scanf("%d", &a);

    if (a % 2 == 0){
        printf("esse numero eh par!\n");
    }
    else {
        printf("esse numero eh impar!\n");
    }

}