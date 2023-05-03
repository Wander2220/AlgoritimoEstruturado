#include<stdio.h>
#include<string.h>
int main(){
    int vetor[80], i = 0, nbusca, contador = 0, posicao[80], numvalores;
    char opcao[3];

    do{
        printf("digite os espacos dos vetores\n");
        scanf("%d", &vetor[i]);
        i++;
        // vetor[i] = i * 5;
        printf("deseja continuar?(sim ou nao)\n");
        gets(opcao);
    }while(strcmp(opcao, "sim" ) == 0 && i < 80);

    printf("o numero: ");
    scanf("%d", &nbusca);

    numvalores = i;
    for(i = 0; i < numvalores; i++){
        if (nbusca == vetor[i]){
            posicao[contador] = i;
            contador++;
        }
    }
    if(contador>0){
        printf("existem %d numeros\n", contador);
        for ( i = 0; i < numvalores; i++){
           printf("essa sao as posicoes:"); 
           printf("%d\n", posicao[i]);
        }
    }
    else{
        printf("valor nao declarado");
    }
        
    return 0;
}