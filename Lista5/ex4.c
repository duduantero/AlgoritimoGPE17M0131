#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAIOR_IDADE printf("Maior de Idade");
#define MENOR_IDADE printf("Menor de Idade");
int main ()
{
    setlocale(LC_ALL, "");
    int idade;

    printf("Digite a sua idade \n");
    scanf("%d",&idade);

    if (idade>=18){
        MAIOR_IDADE;
    }else{
        MENOR_IDADE;
    }
    return 0;
}
