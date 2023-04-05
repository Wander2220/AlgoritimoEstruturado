#include <stdio.h>

int main(){

    float media, x, y, z;

    printf("escolha a media 1 para geometrica, 2 para ponderada, 3 para harmonica e 4 para aritmetica\n");
    scanf("%f", &media);
    printf("digite 3 valores representando x, y e z nesta ordem\n");
    scanf("%f%f%f", &x, &y, &z);

    if (media == 1){
        printf("o resultado da media geometrica eh: %.2f", media = (x*y)*z);
    }
    else if (media == 2){
        printf("o resultado da media ponderada eh: %.2f", media = (x+2)*(y+3)*z/6);
    }
    else if(media == 3){
        printf("o resultadoda media harmonica eh: %.2f", media = 1/(1/x)+(1/y)+(1/z));
    }
    else{
        printf("o resultado da media aritmetica eh: %.2f", media = (x+y+z)/3);
    }
    return 0;
}