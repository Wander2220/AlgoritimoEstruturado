#include <stdio.h>

int main(){

    int A, B, C, D;

    printf("Digite o valor de A, B, C e D nesta ordem: \n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    if (B > C && D > A && (C + D)>(A + B) && C >=0 && D >=0 && A % 2 == 0){
        printf("valores aceitos");
    }
    else{
        printf("valores nao aceitos");
    }
    return 0;
}