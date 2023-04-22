#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
    setlocale(LC_ALL,"Portuguese");
    int valores [10];
    int valoresQuadrado[10];

    for(int x = 0; x < 10;x++){
        printf("Informe o %i numero: \n",x+1);
        scanf("%i",&valores[x]);
        valoresQuadrado[x] = valores[x]* valores[x];
    }

    printf("\n Conjutos de numeros informados: \n");

    for(int x = 0;x <10 ; x++){
        printf(" %i º numero: %i \n",x+1,valores[x]);
    }

    printf("\n Conjutos de numeros informados ao quadrado(x²): \n");
    for(int x = 0;x <10 ; x++){
        printf(" %i º numero: %i \n",x+1,valoresQuadrado[x]);
    }
    getch();
    return 0;
}
