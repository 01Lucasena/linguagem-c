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
	
	//Declarar vari�veis
	
	int i;
	
	//Mostras quais numeros s�o pares e quais s�o impares
	
	cabecalho();
	
	for(i=1;i<=5;i++){
		
		if(i%2==0){
			
			printf("%d � par\n",i);
			
		}else{
		
			printf("%d � impar\n",i);
		
		}
		
	}
	
	return 0;
} 

