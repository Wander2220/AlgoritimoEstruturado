#include<stdio.h>

int main(){

    int n1[5], n2[5], i, soma[5];

    for (i = 0; i < 5; i++){
       printf("digite dois valores\n");
       scanf("%d%d", &n1[i], &n2[i]);
       soma[i] = (n1[i] + n2[i]);
    }
    for (int j = 0; j < 5; j++){
       if(soma[j]%2==0){
       printf("%d eh par\n", soma[j]);
       }
       else if(soma[j]%2==1){
        printf("%d eh impar\n", soma[j]);
       }
    }
}