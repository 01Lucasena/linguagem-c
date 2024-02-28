#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin); 
	
}

int main(){
	
	//Declarar variáveis
	
	int numero;
	
	//Solicitar dados
	
	cabecalho();
	printf("Digite um numero: ");
	scanf("%i",&numero);
	system("cls||clear");
	
	//Verificar se é par ou ímpar
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	if(numero%2==0){
		printf("Numero par.");
	}else{
		printf("Numero impar.");
	}

	return 0;
}
