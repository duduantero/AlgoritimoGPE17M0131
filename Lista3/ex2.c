#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    
    int cont;
    for(cont=0; cont<15; cont ++){
        printf("%d ",15-cont);}
    return 0;
}
