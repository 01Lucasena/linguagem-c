#include <stdio.h>

	int main(){
	//Declarar vari�veis
	
	float primeiroValor, segundoValor, soma, subtracao, multiplicacao, divisao;
	

	//Solicitar dados ao usu�rio
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &primeiroValor);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &segundoValor);
	
	//Realizar opera��es
	
	soma = primeiroValor + segundoValor;
	subtracao = primeiroValor - segundoValor;
	multiplicacao = primeiroValor * segundoValor;
	divisao = primeiroValor / segundoValor;
	
	//Exibir resultados
	
	printf("\n>>>Resultados<<< \n");
	printf("Soma: %f\n", soma);
	printf("Subtracao: %f\n", subtracao);
	printf("Multiplicacao: %f\n", multiplicacao);
	printf("Divisao: %f\n", divisao);
	
	
	
	
	return 0;
	
	}
	
