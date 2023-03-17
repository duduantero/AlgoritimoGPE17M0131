#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Questãoo 1 - Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta 
qual o valor de venda e indica a percentagem de lucro da mercadoria.*/

int main (){
	setlocale(LC_ALL, "Portuguese");

	float custo,frete,despesas,venda,lucro;

	printf("Informe o custo de mercadoria: ");
	scanf("%f", &custo);

	printf("Informe o valor do frete: ");
	scanf("%f",&frete);

	printf("Informe despesas eventuais: ");
	scanf("%f",&despesas);

	printf("Informe o valor de venda: ");
	scanf("%f",venda);

	printf("Sua percentagem de lucro é de %f %%",lucro);

	
}
