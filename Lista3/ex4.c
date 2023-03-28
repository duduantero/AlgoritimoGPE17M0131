#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");

    int idade[5],maior[5];
    float media;

    for(int i = 0; i < 5; i++){
        printf("Informe a idade da %iª pessoa: \n",i+1);
        scanf("%i",&idade[i]);

        if (idade[i]> 18){
            maior[i] = idade[i];
        }
    }
    return 0;
}
