#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin);
	
}

int somar(int n1, int n2){
	
	int soma;
	soma = n1 + n2;
	return soma;
	
}

int subtrair(int n1, int n2){
	
	int subtracao;
	subtracao = n1 - n2;
	return subtracao;
	
}

int multiplicar(int n1, int n2){
	
	int multiplicacao;
	multiplicacao = n1 * n2;
	return multiplicacao;
	
}

float dividir(int n1, int n2){
	
	float divisao;
	divisao = (float)n1 / (float)n2;
	return divisao;
	
}

int main(){
	
	setlocale(LC_ALL,"");
	
	//Declarar vari�veis
	
	int primeiroNumero, segundoNumero, soma, subtracao, multiplicacao;
	float divisao;
	
	//Solicitar dados ao usu�rio
	
	cabecalho();
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&primeiroNumero);
	
	printf("Digite o segundo n�mero: ");
	scanf("%d",&segundoNumero);
	

	//Exibir resultados
	
	cabecalho();
	printf("\nSoma: %d\n",somar(primeiroNumero,segundoNumero));
	printf("Subtra��o: %d\n",subtrair(primeiroNumero,segundoNumero));
	printf("Multiplica��o: %d\n",multiplicar(primeiroNumero,segundoNumero));
	printf("Divis�o: %.2f\n",dividir(primeiroNumero,segundoNumero));
	
	return 0;
	
}

	
