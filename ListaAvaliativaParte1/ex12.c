#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[5],x,maior,menor;
    double media;

    printf("Informe 5 números \n");
    for (x = 0; x < 5; x++)
    {
        printf(" %iº número: \n",x + 1);
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
    printf("Maior número é %i \n",maior);
    printf("Menor número é %i \n",menor);
    printf("Média é %lf \n",media);
    getch();
    return 0;
}
