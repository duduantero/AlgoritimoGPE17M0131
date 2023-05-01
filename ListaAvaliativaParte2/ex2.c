#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main (void)
{
    setlocale(LC_ALL,"Portuguese");

    int x[2],y[2];
    float distancia,p1;

    printf("Informe 2 pontos (x,y) abaixo \n");

    printf("\n Informe o eixo X do primeiro ponto: \n");
    scanf("%i",&x[0]);

    printf("Informe o eixo Y do primeiro ponto: \n");
    scanf("%i",&y[0]);

    printf("Informe o eixo X do segundo ponto: \n");
    scanf("%i",&x[1]);

    printf("Informe o eixo Y do segundo ponto: \n");
    scanf("%i",&y[1]);

    p1 = ((x[1]- x[0])*(x[1]- x[0])) + ((y[1]- y[0])* (y[1]- y[0]));

    distancia = sqrt(p1);

    printf("\n A distancia entre os pontos é : %.4f \n",distancia);

    return 0;
}
