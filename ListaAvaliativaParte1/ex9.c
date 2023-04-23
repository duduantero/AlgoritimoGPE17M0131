#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[6],x = 0;

printf("Informe 6 números pares: \n")
    while (x <= 6)
    {
        printf("Informe o %iº: \n",x + 1);
        scanf("%i",&vetor[x]);
        if(vetor[x] %2 == 0){
            x++;
        }
    }
    for (int x = 5; x >= 0; x--)
    {
        printf("Vetor [%i] = %i\n",x,vetor[x]);

    }



    getch();
    return 0;
    }
