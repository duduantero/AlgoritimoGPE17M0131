#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define MEDIA(p1, p2, p3, p4) (p1 + p2 + p3 +p4)/4;

main ()
{
    setlocale(LC_ALL, "");
    double notal, nota2, nota3, nota4, mediaCalculada;

    printf("Digite a nota l \n");
    scanf("%1f",&notal);

    printf("Digite a nota 2 \n");
    scanf("%1f",&nota2);

    printf("Digite a nota 3 \n");
    scanf("%1f",&nota3);

    printf("Digite a nota 4 \n");
    scanf("%1f",&nota4);

    mediaCalculada = MEDIA(notal, nota2, nota3, nota4);
    printf("A área da parede é %.21f \n",mediaCalculada);
}
