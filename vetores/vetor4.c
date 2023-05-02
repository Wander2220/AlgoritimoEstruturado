#include<stdio.h>
int main(){
    int vetor[6], i, nbusca, contador = 0, posicao[6];

    for(i = 0; i < 6; i++){
        printf("digite os espacos dos vetores\n");
        scanf("%d", &vetor[i]);
        // vetor[i] = i * 5;
    }
    printf("o numero: ");
    scanf("%d", &nbusca);

    for(i = 0; i < 6; i++){
        if (nbusca == vetor[i]){
            posicao[contador] = i;
            contador++;
        }
    }
    if(contador>0){
        printf("existem %d numeros\n", contador);
        for ( i = 0; i < contador; i++){
           printf("essa sao as posicoes:"); 
           printf("%d\n", posicao[i]);
        }
    }
    else{
        printf("valor nao declarado");
    }
        
    return 0;
}