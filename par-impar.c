#include <stdio.h>

int main(){
	//Declarar vari�veis
	int numero;
	
	//Solicitar dados
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	//Verificar se � par ou �mpar
	if(numero%2==0){
		printf("Numero par.");
	}else{
		printf("Numero impar.");
	}

	return 0;
}
