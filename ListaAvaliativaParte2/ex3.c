#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define pi 3.14159

volume(float v)
{
    float resultado;
    resultado = (4/3.0) * pi * (pow(v,3));
    return printf("Volume da sua esfera � %.3f cm� \n",resultado);
}
area(float a)
{
    float res;
    res = 4* pi * pow(a,2);
    return printf("�rea da sua esfera � %.3f cm� \n",res);
}

int main (void)
{

    setlocale(LC_ALL, "Portuguese");
    float raio;

    printf("Informe o Raio de sua esfera em cm: \n");
    scanf("%f",&raio);
    volume(raio);
    area(raio);





    return 0;
}
