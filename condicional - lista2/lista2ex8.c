#include <stdio.h>
#include <string.h>

int main(){

    float valor, valorfinal;
    char destino[2];

    printf("digite o valor do produto: \nR$");
    scanf("%f", &valor);
    printf("digite o estado de destino mg, sp, rj ou ms\n");
    scanf("%s", destino);

    if (strcmp(destino, "mg")==0){
        printf("o valor do produto mais o imposto do estado eh R$:%.2f\n", valorfinal = valor + valor * 7 / 100);
    }
    else if (strcmp(destino, "sp")==0){
        printf("o valor do produto mais o imposto do estado eh R$:%.2f\n", valorfinal = valor + valor * 12 / 100);
    }
    else if (strcmp(destino, "rj")==0){
        printf("o valor do produto mais o imposto do estado eh R$:%.2f\n", valorfinal = valor + valor * 15 / 100);
    }
    else if (strcmp(destino, "ms")==0){
        printf("o valor do produto mais o imposto do estado eh R$:%.2f\n", valorfinal = valor + valor * 0.08);
    }
    else{
        printf("estado invalido selecione um entre mg, sp, rj ou ms!!");
    }
    return 0;
}