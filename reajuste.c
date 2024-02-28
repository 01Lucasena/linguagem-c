#include <stdio.h>

int main(){
	//declarar variáveis
	float valor, reajuste10;
	
	//Solicitar dados ao usuário
	printf("Digite um valor: ");
	scanf("%f", &valor);
	
	//Calcular reajuste de 10%
	reajuste10 = valor - (valor * 0,10);
	
	//Exibir valor com reajuste
	printf("\n>>>EXIBINDO DADOS<<<\n");
	printf("Valor: R$ %.2f\n", valor);
	printf("Valor com reajuste de 10%: R$ %.2f\n", reajuste10);
	
	
	
	return 0;
}
