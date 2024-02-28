#include <stdio.h>

int main(){
	//Declarar variaveis
	int numero, antecessor, sucessor;
	
	//Solicitar dados ao usuário
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	
	//Mostrar número sucessor e antecessor
	sucessor = numero + 1;
	antecessor = numero - 1;
	printf("\n>>>EXIBINDO DADOS<<<\n");
	printf("Sucessor: %i \n", sucessor);
	printf("Antecessor: %i \n", antecessor);
	
	return 0;
}
