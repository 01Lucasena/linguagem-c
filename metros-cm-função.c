#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float converterMetrosEmCentimetros(float numero){
	
	float converter	= (float)numero * 100;
	return converter;
	
}

int main(){
	
	setlocale(LC_ALL,"");
	
	float numero;
	
	printf("\n=== CONVERSOR: m --> cm ===\n");
	printf("Digite um número: ");
	scanf("%f",&numero);
	
	printf("\n=== RESULTADO ===\n");
	printf("%.2f cm",converterMetrosEmCentimetros(numero));
	
	return 0;
}


