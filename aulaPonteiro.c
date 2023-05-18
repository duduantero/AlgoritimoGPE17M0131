#include <stdio.h>
#include <conio.h> //ou conio.c

int main (void) {
    //declaração de variáveis

    int agir = 5;
    int *pAgir = 0;

    //demonstração da troca

    printf("Troca de valores \n \n");
    printf("Agir = %d \n");
    pAgir = &agir;
    printf("*pAgir(agir) = %d \n", *pAgir);

    //primeira troca de valores
    printf("\n *pAgir = 7 \n");
    *pAgir = 7;
    printf("*pAgir = %d \n");
    printf("Agir %d \n",agir);
    //segunda troca de valores
    printf("\n Agir = 9 \n");
    agir = 9;
    printf("*pAgir: %d \n",agir);
    getch();
}
