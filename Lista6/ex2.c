#include <stdio.h>

// Fun��o que incrementa o valor por meio de um ponteiro
void incrementar(int *numero) {
    (*numero)++; // Incrementa o valor apontado pelo ponteiro
}

int main() {
    int numero;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    printf("Valor antes da chamada da fun��o: %d\n", numero);

    incrementar(&numero); // Chama a fun��o passando o endere�o de mem�ria do n�mero

    printf("Valor ap�s a chamada da fun��o: %d\n", numero);

    return 0;
}
