#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "");
    int menor = 1,maior = 0;
    int vetor[10];

    for (int x = 0; x < 10; x++)
    {
        printf("Informe o %iº: \n",x + 1);
        scanf("%i",&vetor[x]);
        if (vetor[x] < menor)
        {
            menor = vetor[x];
        }

        if (vetor[x] > maior)
        {
            maior = vetor[x];
        }
    }
    printf("O menor número é %i \n",menor);
    printf("O maior número é %i \n",maior);
    getch();
    return 0;
}
