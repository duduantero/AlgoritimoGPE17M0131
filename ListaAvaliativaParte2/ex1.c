#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL,"Portuguese");

    int a,b,c,d;
    float diferenca;

    printf("Informe valor da letra A: \n");
    scanf("%i",&a);

    printf("Informe valor da letra B: \n");
    scanf("%i",&b);

    printf("Informe valor da letra C: \n");
    scanf("%i",&c);

    printf("Informe valor da letra D: \n");
    scanf("%i",&d);

    diferenca = (a * b) - (c * d);


    printf("Diferença = %d * %d - %d * %d \n",a,b,c,d);
    printf("Diferença = %.1f \n",diferenca);

    getch();
    return 0;
}

