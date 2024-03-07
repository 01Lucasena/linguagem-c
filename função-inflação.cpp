#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float inflacionar(float valor){
	
	float inflacao = valor < 100 ? valor * 1.1 : valor * 1.2;
	
	return inflacao;
	
}

int main(){
	
	setlocale(LC_ALL,"");
	
	float valor;
	
	printf("Digite um valor: ");
	scanf("%f",&valor);
	
	printf("\n=== RESULTADO ===\n");
	printf("Valor com  inflação: %.2f",inflacionar(valor));
	
	return 0;
}
