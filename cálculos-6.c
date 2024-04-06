#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin); 

}

int main(){
	
	//Declarar variaveis
	
	int numero, antecessor, sucessor;
	
	//Solicitar dados ao usuário

	cabecalho();
	printf("Digite um numero: ");
	scanf("%i",&numero);
	system("cls||clear");
	
	//Verificar sucessor e antecessor
	
	sucessor = numero + 1;
	antecessor = numero - 1;
	
	//Exibindo dados ao usuário 
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	printf("Sucessor: %i \n",sucessor);
	printf("Antecessor: %i \n",antecessor);
	
	return 0;
}
