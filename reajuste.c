#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin); 
	
}

int main(){
	
	//Declarar variáveis
	
	float valor, reajuste10;
	
	//Solicitar dados ao usuário

	cabecalho();
	printf("Digite um valor: ");
	scanf("%f",&valor);
	system("cls||clear");
	
	//Calcular reajuste de 10%
	
	reajuste10 = valor - (valor * 0,10);
	
	//Exibir valor com reajuste
	
	printf("\n===EXIBINDO DADOS===\n");
	printf("Valor: R$ %.2f\n",valor);
	printf("Valor com reajuste de 10%: R$ %.2f\n", reajuste10);
	
	return 0;
}
