#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Quest�o 2 - Fa�a um programa que pergunte qual o raio de um c�rculo, calcule e imprima a sua �rea.*/

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float raio,resultado;
	printf("Informe o raio de um circulo em cm: \n");
	scanf("%f",&raio);
	resultado = 3.14 *(raio * raio);
	printf("A �rea do circulo � : %2.f cm�",resultado);	
}
