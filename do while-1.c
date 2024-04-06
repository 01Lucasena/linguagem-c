#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	//declarar variáveis
	int contador=0;
	char continua;
	float nota, soma=0, media;
	
	//solicitar dados ao usuário
	
	do{
		printf("Digite sua nota: ");
		scanf("%f",&nota);
		
		fflush(stdin);
		
		contador++;
		
		printf("Deseja inserir mais uma nota? (Tecle 'S' para SIM ou 'N' para NÃO): ");
		scanf("%c",&continua);
	
		continua = toupper(continua);
		
		soma += nota;
		
	}while(continua=='S');
	

	media = soma/contador;
	
	printf("\nMédia: %.2f",media);
	
	return 0;
	
}
