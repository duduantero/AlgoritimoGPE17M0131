#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float sal, pres;

    printf("Informe o sal�rio do trabalhador: \n");
    scanf("%f",&sal);

    printf("Informe o valor da presta��o do empr�stimo: \n");
    scanf("%f",&pres);

    if (pres > sal * 0.2){
        printf("Empr�stimo n�o concedido.");
    } else {
    printf("Empr�stimo concedido.");
    }
    return 0;
}
