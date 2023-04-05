#include <stdio.h>

int main(){

    int x, y;

    printf("digite dois valores do plano cartesiano\n");
    scanf("%d%d", &x, &y);

    if(x == 0 && y ==0){
        printf("origem");
    }
    else if(x > 0 && y > 0){
        printf("quadrante 1");
    }
    else if(x < 0 && y > 0){
        printf("quadrante 2");
    }
    else if(x < 0 && y < 0){
        printf("quadrante 3");
    }
    else if(x > 0 && y < 0){
        printf("quadrante 4");
    }
    return 0;
}