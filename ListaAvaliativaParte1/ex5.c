#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "");
    int valores[10];
    int pares[10]= {};
    int par;
    int y =0;

    for (int x = 0; x < 10; x++)
    {
        printf("Informe o n�mero %i :\n",x+1);
        scanf("%i",&valores[x]);
        fflush(stdin);
    }

    for (int x = 0; x < 10; x++)
    {
        if (valores[x] %2 == 0)
        {
            pares[y] = valores[x];
            par++;
            y++;
        }
    }

    printf("Os n�meros pares s�o : \n");
    for(int x = 0; x < par ; x++)
    {
        printf("Vetor Pares[%i] = %i \n",x+1,pares[x]);
    }
    getch();
    return 0;
}
