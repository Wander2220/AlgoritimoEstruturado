#include <stdio.h>

int main()
{

    int valorA, valorB, valorC, valorD;
    int diferenca;

    printf("digite o valor de A: ");
    scanf("%d", &valorA);
    printf("digite o valor de B: ");
    scanf("%d", &valorB);
    printf("digite o valor de C: ");
    scanf("%d", &valorC);
    printf("digite o valor de D: ");
    scanf("%d", &valorD);

    diferenca = valorA * valorB - valorC * valorD;
    diferenca = diferenca;

    printf("a diferenca entre A * B e C * D eh %d", diferenca);

    return 0;
}