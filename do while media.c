#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");

	//declarar vari�veis
	
	int contador;
	float nota, soma=0, media;
	
	//solicitar dados ao usu�rio
	
	for(contador=1;contador<=2;contador++){
	
	do{
	
		printf("Digite a %d� nota: ",contador);
		scanf("%f",&nota);
		fflush(stdin);
		
	
	
	}while(nota<0||nota>10);
	
	soma=soma+nota;

	}
	
	media = soma / 2;
	printf("\nM�dia: %.2f",media);
	
	return 0;

}
