#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin); 
	
}	
	
int main(){
	
	//Declarar variáveis
	
	float primeiroValor, segundoValor, soma, subtracao, multiplicacao, divisao;
	

	//Solicitar dados ao usuário
	
	cabecalho();
	printf("Digite o primeiro valor: ");
	scanf("%f",&primeiroValor);
	
	cabecalho();
	printf("Digite o segundo valor: ");
	scanf("%f",&segundoValor);
	system("cls||clear");
	
	//Realizar operações
	
	soma = primeiroValor + segundoValor;
	subtracao = primeiroValor - segundoValor;
	multiplicacao = primeiroValor * segundoValor;
	divisao = primeiroValor / segundoValor;
	
	//Exibir resultados
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	printf("Soma: %.2f\n",soma);
	printf("Subtracao: %.2f\n",subtracao);
	printf("Multiplicacao: %.2f\n",multiplicacao);
	printf("Divisao: %.2f\n",divisao);
	
	return 0;
	
	}
