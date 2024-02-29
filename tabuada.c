#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin);
	
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	//Declarar variaveis
	
	int numero,i;
	
	//Solicitar dados ao usuário
	
	cabecalho();
	printf("Digite um número: ");
	scanf("%i",&numero);
	
	//Mostrar tabuada do numero informado
	
		for (i=1;i<=10;i++) {
		
		printf("%i x %i = %i \n",numero,i,numero*i);
	
	}
	
	
	
	return 0;
}
