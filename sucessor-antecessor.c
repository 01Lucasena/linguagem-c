#include <stdio.h>

int main(){
	//Declarar variaveis
	int numero, antecessor, sucessor;
	
	//Solicitar dados ao usu�rio
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	
	//Mostrar n�mero sucessor e antecessor
	sucessor = numero + 1;
	antecessor = numero - 1;
	printf("Sucessor: %i \n", sucessor);
	printf("Antecessor: %i \n", antecessor);
	
	return 0;
}
