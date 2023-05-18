#include <stdio.h>

int main() {
    int numero;
    int *ponteiro;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Atribui o endereço de memória convertido em um ponteiro
    ponteiro = (int *)numero;

    printf("Endereço de memória após a atribuição: %p\n", ponteiro);

    return 0;
}
