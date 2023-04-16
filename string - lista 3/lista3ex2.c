#include<stdio.h>
#include<string.h>

int main(){

 char cor[15];

 printf("digite uma cor\n");
 scanf("%s", cor);
 
    if (strcmp(cor, "verde")==0)
{
   printf("cor verde!");
 }
    else if(strcmp(cor, "branco")==0){
    printf("cor branca!");
 }
    else if(strcmp(cor, "amarelo")==0){
    printf("cor amarela!");
}
    else{
    printf("cor invalida!");
}
return 0;
}