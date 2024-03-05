

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
	
	int i, numero=0, soma=0;
	
	//Solicitando dados ao usuário
	

	
	for(i=1;i<=5;i++){
		
		cabecalho();
		printf("Digite o %dº número: ",i);
		scanf("%d",&numero);
		
		
		soma = soma + numero; 
		
		printf("\nSoma: %d \n",soma);
		
	}
	
	
	return 0;
}
