#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin);
	
}

int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	//Declarar variáveis
	
	int primeiroValor, segundoValor, soma, subtracao, multiplicacao;
	float divisao;
	
	//Solicitar dados ao usuário
	
	cabecalho();
	printf("Digite o primeiro valor: ");
	scanf("%i",&primeiroValor);
	
	cabecalho();
	printf("Digite o segundo valor: ");
	scanf("%i",&segundoValor);
	system("cls||clear");
	
	//Efetuar cálculo dos valores
	
	soma=primeiroValor+segundoValor;
	subtracao=primeiroValor-segundoValor;
	multiplicacao=primeiroValor*segundoValor;
	divisao=primeiroValor/segundoValor;
	
	//Exibir dados ao usuário
	
	cabecalho();
	printf("\n===EXIBINDO RESULTADOS===\n");
	printf("Primeiro Valor: %i\n",primeiroValor);
	printf("Segundo Valor: %i\n",segundoValor);
	printf("Soma: %i\n",soma);
	printf("Subtração: %i\n",subtracao);
	printf("Multiplicação: %i\n",multiplicacao);
	printf("Divisão: %.2f\n",divisao);

	return 0;

}



