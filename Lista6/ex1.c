#include <stdio.h>

int main() {

    int numero;                   // Variável do tipo inteiro
    int *ponteiro;                // Variável do tipo ponteiro para inteiro

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    ponteiro = &numero;           // Atribui o endereço da variável 'numero' ao ponteiro

    printf("\nValores antes da troca:\n");
    printf("Numero: %d \n", numero);
    printf("Ponteiro: %d \n", *ponteiro);

    // Troca o conteúdo do valor armazenado na variável 'numero' com o conteúdo apontado pelo ponteiro
    *ponteiro = 42;

    printf("\nValores apos a troca:\n");
    printf("Numero: %d \n", numero);
    printf("Ponteiro: %d \n", *ponteiro);

    return 0;
}
