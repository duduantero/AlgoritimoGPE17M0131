#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL ,"Portuguese");
    int num[10];
    float media;
    printf("Informe 10 números: \n");

    for(int x = 0; x < 10; x++){
        printf("Informe o %d º número: ",x+1);
        scanf("%d",&num[x]);
        media = media + num[x];
    }
    media = media/10;
    printf("A média dos números informados é %.1f",media);

    getch();
    return 0;

}
