#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[5],x,maior,menor;
    double media;

    printf("Informe 5 n�meros \n");
    for (x = 0; x < 5; x++)
    {
        printf(" %i� n�mero: \n",x + 1);
        scanf("%i",&vetor[x]);
        media = media + vetor[x];
        if(vetor[x] > maior)
        {
            maior = vetor[x];
            menor = vetor[x];
        }

    }

    for(int i = 0; i < x; i++)
    {
        printf("vetor [%i] = %i \n",i,vetor[i]);
        if (menor > vetor[i])
        {
            menor = vetor[i];
        }
    }
    media = media / x;
    printf("Maior n�mero � %i \n",maior);
    printf("Menor n�mero � %i \n",menor);
    printf("M�dia � %lf \n",media);
    getch();
    return 0;
}
