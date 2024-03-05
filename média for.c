#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin);
	
}

int main(){
	
	setlocale(LC_ALL,"");
	
	//Declarar variáveis
	
	float nota=0, media=0, soma=0;
	int i;
	
	//Solicitar dados ao usuário
	
	for(i=1;i<=4;i++){
		
		cabecalho();
		printf("Digite a %dª nota: ", i);
		scanf("%f",&nota);
		soma = soma + nota;
		system("cls||clear");
		
	}
	media = soma / (i-1);
	printf("\nMédia %.2f: ",media);
	
	return 0;

}




	
	
