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
	
	//Declarar vari�veis
	
	int primeiroValor, segundoValor, soma, subtracao, multiplicacao;
	float divisao;
	
	//Solicitar dados ao usu�rio
	
	cabecalho();
	printf("Digite o primeiro valor: ");
	scanf("%i",&primeiroValor);
	
	cabecalho();
	printf("Digite o segundo valor: ");
	scanf("%i",&segundoValor);
	system("cls||clear");
	
	//Efetuar c�lculo dos valores
	
	soma=primeiroValor+segundoValor;
	subtracao=primeiroValor-segundoValor;
	multiplicacao=primeiroValor*segundoValor;
	divisao=primeiroValor/segundoValor;
	
	//Exibir dados ao usu�rio
	
	cabecalho();
	printf("\n===EXIBINDO RESULTADOS===\n");
	printf("Primeiro Valor: %i\n",primeiroValor);
	printf("Segundo Valor: %i\n",segundoValor);
	printf("Soma: %i\n",soma);
	printf("Subtra��o: %i\n",subtracao);
	printf("Multiplica��o: %i\n",multiplicacao);
	printf("Divis�o: %.2f\n",divisao);

	return 0;

}



