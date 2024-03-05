#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin);
	
}

int main (){
	
	setlocale (LC_ALL,"");
	
	//Declarar variáveis
	
	int i, numero=0, pares=0, impares=0;
	
	//
	
	for(i=1;i<=5;i++){
		
		cabecalho();
		printf("Digite o %dº número: ", i);
		scanf("%d",&numero);
		
		if(numero%2==0){
			
			pares++;
			
		}else{
			
			impares++;
		}
		
	}
	
	printf("\nTotal de pares: %d", pares);
	printf("\nTotal de impares: %d", impares);
	
	return 0;
}
