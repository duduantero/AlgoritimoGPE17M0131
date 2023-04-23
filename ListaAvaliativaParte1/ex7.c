#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "");
    int maior = 0,posicao;
    int vetor[10];

    for (int x = 0; x < 10; x++)
    {
        printf("Informe o %iº: \n",x + 1);
        scanf("%i",&vetor[x]);
        if (vetor[x] > maior)
        {
            maior = vetor[x];
            posicao = x;
        }
    }
    printf("Posição do vetor é %i ou vetor[%i] \n",posicao,posicao);
    printf("O maior número é o %i \n",maior);
    getch();
    return 0;
}
