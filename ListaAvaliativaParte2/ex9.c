#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int opcao, quantidade;
    float total = 0;

    printf("Bem-vindo ao Mercado de Frutas!\n\n");

    do {
        printf("MENU DE FRUTAS:\n");
        printf("1 - ABACAXI (R$ 5,00)\n");
        printf("2 - MAÇA (R$ 1,00)\n");
        printf("3 - PERA (R$ 4,00)\n");
        printf("0 - FINALIZAR COMPRA\n");

        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite a quantidade de abacaxis que deseja comprar: ");
                scanf("%d", &quantidade);
                total += quantidade * 5.0;
                break;
            case 2:
                printf("Digite a quantidade de maçãs que deseja comprar: ");
                scanf("%d", &quantidade);
                total += quantidade * 1.0;
                break;
            case 3:
                printf("Digite a quantidade de peras que deseja comprar: ");
                scanf("%d", &quantidade);
                total += quantidade * 4.0;
                break;
            case 0:
                printf("Compra finalizada! O valor total da compra foi R$ %.2f.\n", total);
                break;
            default:
                printf("Opção inválida!\n");
        }

        printf("\n");
    } while(opcao != 0);

    return 0;
}
