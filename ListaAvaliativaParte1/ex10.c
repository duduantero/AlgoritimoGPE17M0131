#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[15],x;
    double media;


    printf("Informe a nota dos alunos abaixo \n");
    for (x = 0; x < 15; x++)
    {
        printf("Informe a nota do %iº aluno: \n",x + 1);
        scanf("%i",&vetor[x]);
        media = media + vetor[x];
    }
    media = media / x;
    printf("Média geral é %lf \n",media);



    getch();
    return 0;
    }
