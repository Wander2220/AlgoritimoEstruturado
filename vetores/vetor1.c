#include<stdio.h>

int main(){

    float n1[5], n2[5], soma[5];
    int i;

    for (i = 0; i < 5; i++){
       printf("digite dois valores\n");
       scanf("%f%f", &n1[i], &n2[i]);
       soma[i]= (n1[i] + n2[i]);
       printf("%.2f\n", soma[i]); 
    }

}