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
	
	int i;
	
	//Mostras quais numeros são pares e quais são impares
	
	cabecalho();
	
	for(i=1;i<=5;i++){
		
		if(i%2==0){
			
			printf("%d é par\n",i);
			
		}else{
		
			printf("%d é impar\n",i);
		
		}
		
	}
	
	return 0;
} 

