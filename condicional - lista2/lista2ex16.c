#include <stdio.h>

int main(){

int ddd;

printf("digite o ddd para mostrar a cidade de origem\n");
scanf("%d", &ddd);

switch (ddd)
{
case 61:
printf("brasilia");
break;
case 71:
printf("salvador");
break;
case 11:
printf("sao paulo");
break;
case 21:
printf("rio de janeiro");
break;
case 32:
printf("juiz de fora");
break;
case 19:
printf("campinas");
break;
case 27:
printf("vitoria");
break;
case 31:
printf("belo horizonte");
break;
default:
printf("uma cidade no brasil sem identificacao");
    break;
}
}