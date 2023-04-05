#include <stdio.h>

int main(){

    int idade;

    printf("digite sua idade: \n");
    scanf("%d", &idade);

    if (idade >=5 && idade <=7){
        printf("voce esta na categoria infantil A");
    }
    else if (idade >=8 && idade <=10){
        printf("voce esta na categoria infantil B");
    }
    else if (idade >=11 && idade <=13){
        printf("voce esta na categoria juvenil A");
    }
    else if (idade >=14 && idade <=17){
        printf("voce esta na categoria juvenil B");
    }
    else if (idade >= 18){
        printf("voce esta na categoria senior");
    }
    else {
        printf("voce esta fora da faixa etaria indicada!");
    }
    return 0;
}