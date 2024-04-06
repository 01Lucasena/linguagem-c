#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin);
	
}

void verificarParOuImpar(int numero){
	
	numero % 2 == 0 ? printf("\n%d é par",numero) : printf("\n%d é ímpar",numero);
		
}

int main(){

	setlocale(LC_ALL,"");
	
	//Declarar variáveis
	
	int numero;
	
	//Solicitar dados ao usuário
	
	cabecalho();
	printf("Digite um número: ");
	scanf("%d",&numero);
	
	printf("\n===RESULTADO===");
	verificarParOuImpar(numero);
	
	return 0;	
}
	
	



