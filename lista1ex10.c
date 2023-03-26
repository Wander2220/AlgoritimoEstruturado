#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

   double x1, x2, y1, y2;
   double distancia;

    printf("digite 4 valores do plano cartesiano: \n");
    scanf("%lf\n, %lf\n", &x1, &x2);
    fflush (stdin);
    scanf("%lf\n, %lf\n", &y1, &y2);
    fflush (stdin);

    distancia = sqrt (pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf ("a distancia entre os valores no plano eh %.4lf :", distancia);
}