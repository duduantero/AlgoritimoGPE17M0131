#include <stdio.h>

int main() {
    int numero;
    int *ponteiro;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    // Atribui o endere�o de mem�ria convertido em um ponteiro
    ponteiro = (int *)numero;

    printf("Endere�o de mem�ria ap�s a atribui��o: %p\n", ponteiro);

    return 0;
}
