#include<stdio.h>

int main(){

 float cem, cinquenta, vinte, dez, cinco, dois, valor;
 float umR, cinqC, vintecinco, dezC, cincoC, umC; 

 printf("digite um valor para mostrar a quantidade de notas e moedas\n");
 scanf("%f", &valor);

cem = valor / 100;
cinquenta = valor / 50;
vinte = valor / 20;
dez = valor / 10;
cinco = valor / 5;
dois = valor / 2;

printf("--NOTAS--\n");
printf("%.2f sao %.2f notas de cem reais\n", valor, cem);
printf("%.2f sao %.2f notas de cinquenta reais\n", valor, cinquenta);
printf("%.2f sao %.2f notas de vinte reais\n", valor, vinte);
printf("%.2f sao %.2f notas de dez reais\n", valor, dez);
printf("%.2f sao %.2f notas de cinco reais\n", valor, cinco);
printf("%.2f sao %.2f notas de dois reais\n", valor, dois);

umR = valor / 1;
cinqC = valor / 0.50;
vintecinco = valor / 0.25;
dezC = valor / 0.10;
cincoC = valor / 0.05;
umC = valor / 0.01;

printf("--MOEDAS--\n");
printf("%.2f sao %.2f moedas de um real\n", valor, umR);
printf("%.2f sao %.2f moedas de cinquenta centavos\n", valor, cinqC);
printf("%.2f sao %.2f moedas de vinte e cinco centavos\n", valor, vintecinco);
printf("%.2f sao %.2f moedas de dez centavos\n", valor, dezC);
printf("%.2f sao %.2f moedas de cinco centavos\n", valor, cincoC);
printf("%.2f sao %.2f moedas de um centavo\n", valor, umC);
}