#include <stdio.h>

int main() {

    int numero;                   // Vari�vel do tipo inteiro
    int *ponteiro;                // Vari�vel do tipo ponteiro para inteiro

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    ponteiro = &numero;           // Atribui o endere�o da vari�vel 'numero' ao ponteiro

    printf("\nValores antes da troca:\n");
    printf("Numero: %d \n", numero);
    printf("Ponteiro: %d \n", *ponteiro);

    // Troca o conte�do do valor armazenado na vari�vel 'numero' com o conte�do apontado pelo ponteiro
    *ponteiro = 42;

    printf("\nValores apos a troca:\n");
    printf("Numero: %d \n", numero);
    printf("Ponteiro: %d \n", *ponteiro);

    return 0;
}
