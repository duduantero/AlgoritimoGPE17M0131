#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int x,y;
    int matriz[4][4]={{45,32,83,95},{26,14,37,42},{40,43,65,77},{74,79,48,55}};
    for (x=0; x<4; x++){
        for (y=0; y<4; y++)
            printf("%4d ",matriz[x][y]);
    printf("\n\n");
    }
    int mult=matriz[2][0]*matriz[2][1]*matriz[2][2]*matriz[2][3];
    printf("A soma e %4d",mult);
    return 0;
}
