#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "");
    int cont,valor;
    
    printf("Digitar um valor ");
    scanf("%d",&valor);
    for(cont=0; cont<=valor; cont ++){
    printf("%d ",valor-cont);
    }
    
    return 0;
}
