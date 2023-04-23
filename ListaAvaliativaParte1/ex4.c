#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
    setlocale(LC_ALL,"Portuguese");
    int valores [8],x,y,soma;

    for(int x = 0; x < 8;x++){
        printf("Informe o %i numero: \n",x+1);
        scanf("%i",&valores[x]);
    }

    printf("\n Digite valor para X: \n");
    scanf("%i",&x);

    printf("\n Digite valor para Y: \n");
    scanf("%i",&y);

    soma = valores[x]+ valores[y];
    printf("\n A soma do vetor[%i] e vetor[%i] é :%i: \n",x,y,soma);
    printf("Vetor [%i] = %i  e Vetor [%i] = %i",x,valores[x],y,valores[y]);

    getch();
    return 0;
}
