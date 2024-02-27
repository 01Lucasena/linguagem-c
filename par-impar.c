#include <stdio.h>

int main(){
	//Declarar variáveis
	int numero;
	
	//Solicitar dados
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	//Verificar se é par ou ímpar
	if(numero%2==0){
		printf("Numero par.");
	}else{
		printf("Numero impar.");
	}

	return 0;
}
