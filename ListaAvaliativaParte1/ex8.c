#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[6];

    printf("Informe 6 números pares: \n");
    for (int x = 0; x < 6; x++)
    {
        printf("Informe o %iº: \n",x + 1);
        scanf("%i",&vetor[x]);
    }
    for (int x = 5; x >= 0; x--)
    {
        printf("Vetor [%i] = %i\n",x,vetor[x]);

    }
    getch();
    return 0;
}
