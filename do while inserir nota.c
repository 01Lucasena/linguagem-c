#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	//declarar vari�veis
	int contador=0;
	char continua;
	float nota, soma=0, media;
	
	//solicitar dados ao usu�rio
	
	do{
		printf("Digite sua nota: ");
		scanf("%f",&nota);
		
		fflush(stdin);
		
		contador++;
		
		printf("Deseja inserir mais uma nota? (Tecle 'S' para SIM ou 'N' para N�O): ");
		scanf("%c",&continua);
	
		continua = toupper(continua);
		
		soma += nota;
		
	}while(continua=='S');
	

	media = soma/contador;
	
	printf("\nM�dia: %.2f",media);
	
	return 0;
	
}
