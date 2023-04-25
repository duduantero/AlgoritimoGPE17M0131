#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");

    int x,y;
    int matriz[4][4]= {{45,32,83,95},{26,14,37,42},{40,43,65,77},{74,79,48,55}};

    for (x=0; x<4; x++)
    {
        for (y=0; y<4; y++)
            printf("%4d ",matriz[x][y]);
        printf("\n\n");
    }


    int somaLinha1 = matriz[1][0]+ matriz[1][1]+ matriz[1][2]+ matriz[1][3];
    printf("A soma da linha 1 = %d", somaLinha1);
    int somalinha3 = matriz[3] [0]+ matriz[3][1]+matriz[3] [2]+matriz[3][3];
    printf("\n A soma da linha 3 = %d",somalinha3);
    if (somaLinha1>somalinha3)
    {
        printf("\n A maior soma esta na linha 1 = %d",somaLinha1);
    }
    else
    {
        printf("\n A maior soma está na linha 3 = %d",somalinha3);
    }
    return 0;
}
