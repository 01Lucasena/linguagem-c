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
	
	//Declarar varáveis
	
	int i;
	
	//Exibir némeros pares de 100 a 120
	
	cabecalho();
	
	for(i=100;i<=120;i++){
		
		if(i%2==0){
			
			printf("%d\n",i);
			
		}
	}
	
	return 0;
	
}
