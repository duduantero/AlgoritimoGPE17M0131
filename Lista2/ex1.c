#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");
    int value;


    printf("Informe o DDD da cidade: \n");
    scanf("%d",&value);

    switch (value)
    {
    case 61 :
        printf("Brasília");
        break;

    case 72 :
        printf("Salvador");
        break;

    case 11:
        printf("São Paulo");
        break;

    case 21 :
        printf("Rio de Janeiro");
        break;

    case 32 :
        printf("Juiz de Fora");
        break;

    case 19 :
        printf("Campinas");

        break;

    case 27 :
        printf("Vitória");
        break;

    case 31 :
        printf("Belo Horizonte");
        break;

    default:
        printf("Valor inválido.");
        break;
    }
    return (0);
}
