#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin);
	
}

void verificarParOuImpar(int numero){
	
	numero % 2 == 0 ? printf("\n%d � par",numero) : printf("\n%d � �mpar",numero);
		
}

int main(){

	setlocale(LC_ALL,"");
	
	//Declarar vari�veis
	
	int numero;
	
	//Solicitar dados ao usu�rio
	
	cabecalho();
	printf("Digite um n�mero: ");
	scanf("%d",&numero);
	
	printf("\n===RESULTADO===");
	verificarParOuImpar(numero);
	
	return 0;	
}
	
	



