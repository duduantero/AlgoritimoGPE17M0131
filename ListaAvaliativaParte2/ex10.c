#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL ,"Portuguese");
    int num[10];
    float media;
    printf("Informe 10 n�meros: \n");

    for(int x = 0; x < 10; x++){
        printf("Informe o %d � n�mero: ",x+1);
        scanf("%d",&num[x]);
        media = media + num[x];
    }
    media = media/10;
    printf("A m�dia dos n�meros informados � %.1f",media);

    getch();
    return 0;

}
