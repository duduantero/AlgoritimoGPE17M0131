#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "");
    float vetor[10],negativos,positivos;

    printf("Informe 10 números reais \n");

    for (int x = 0; x <10; x++){
        printf("%i º número: \n",x+1);
        scanf("%f",&vetor[x]);
        positivos = positivos + vetor[x];

        if(vetor[x] < 0)
        {
            negativos++;
        }
    }
    printf("O vetor possuí %f numeros negativos \n",negativos);
    printf("A soma dos valores do vetor é %f \n",positivos);

    getch();
    return 0;
}
