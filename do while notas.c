#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");

	//declarar vari�veis
	
	float nota;
	
	//solicitar dados ao usu�rio
	
	do{
	
		printf("Digite sua nota: ");
		scanf("%f",&nota);
		fflush(stdin);
	
	}while(nota<0||nota>10);
	
	printf("\nNota: %.2f",nota);
	
	return 0;

}
