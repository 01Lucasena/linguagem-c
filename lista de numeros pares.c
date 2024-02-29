#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	//Declarar variáveis
	
	int i;
	
	//Escrever algoritimo que gera numeros pares entre 100 e 120
	
	printf("Lista de números pares entre 100 e 120: \n");

	for(i=100;i<=120;i++){
		
		if(i%2==0){
		
			printf("%d \n",i);
		
		}
	}
	
	return 0;
}
