#include <stdio.h>

int main(){

    float n1, n2, n3, n4, media, notaex, mediafinal;

    printf("digite suas 4 notas para calcular sua media\n");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    n1 = n1 / 2;
    n2 = n2 / 3;
    n3 = n3 / 4;
    n4 = n4 * 0.1;
    media = n1 + n2 + n3 + n4;
    printf("media: %.2f\n", media);
    if(media >= 7.0){
        printf("aluno aprovado!\n");
    }
    else if (media < 5.0){
        printf("aluno reprovado\n");
    }
    else if(media >= 5.0 && media <= 6.9){
        printf("aluno em exame\n");
        printf("digite a nota do exame\n");
        scanf("%f", &notaex);
        printf("nota do exame: %.2f\n", notaex);
    if((notaex + media) / 2 >= 5.0){
        printf("aluno aprovado!\n");
    }
    else{
        printf("aluno reprovado\n");
    }
    printf("media final: %.2f", (notaex + media) / 2);
    }
}