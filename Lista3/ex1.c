#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");

int crescente = 0, decrescente = 5;

for(int i=0; i <= 5;i++, crescente++, decrescente--){

printf("%d e %d.\n", crescente, decrescente);}

    return 0;
}
