#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");

	//declarar variáveis
	
	float nota;
	
	//solicitar dados ao usuário
	
	do{
	
		printf("Digite sua nota: ");
		scanf("%f",&nota);
		fflush(stdin);
	
	}while(nota<0||nota>10);
	
	printf("\nNota: %.2f",nota);
	
	return 0;

}
