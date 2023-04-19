#include<stdio.h>

double fahrenheitCelsius (float F){
 double C;
 C = (F - 32) * 5/9;
return C;
}
float celsiusFahrenheit (float C){
    float F;
    F = (9 * C/5) + 32;
    return F;
}
double celsiusKelvin(float C){
    double K;
    K = C + 273.15;
    return K;
}
double funcao(float F, float K){
    double C;
    C = K - F + 273.15;
    return C; 
}
int main(){

    int escolha;
    float F;
    double K, C;
    printf("escolha uma opcao, 1 de celsius para fahrenheit, 2 de fahrenheit para celsius, 3 de celsius para kelvin,\n 
    de casa ");
    printf("digite o valor de fahrenheit\n");
    scanf("%f", &F);
    printf("digite o valor de kelvin\n");
    scanf("%lf", &K);
    C = funcao(F, K);
    printf("essa eh a resposta: %.2lf", C);
    










}