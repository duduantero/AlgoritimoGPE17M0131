#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1,num2,num3,maior,menor;

    printf("Informe o primeiro n�mero: \n");
    scanf("%f",&num1);

    printf("Informe o primeiro segundo: \n");
    scanf("%f",&num2);

    printf("Informe o primeiro terceiro: \n");
    scanf("%f",&num3);

    maior = num1;
    menor = num2;

    if (num1 == num2 && num1 == num3)
    {
        printf("Os n�meros s�o iguais.");
    }
    else
    {
        if (num2 > maior && num2 > num3)
        {
            maior = num2;
        }
       else if (num3 > maior && num3 > num2)
            {
                maior = num3;
            }

    }
    if (num1< menor && num1 < num3)
    {
        menor = num1;
    }
    else if (num3 <menor)
        {
            menor = num3;
        }
        printf("O maior n�mero � %2.f e o menor n�mero � %2.f",maior,menor);
return 0;
}


