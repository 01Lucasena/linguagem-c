#include <stdio.h>
#include <locale.h>

#define SIZE 5

int main(){
	
	setlocale(LC_ALL,"");
	
	int i, numero[SIZE], maiorNumero=0, menorNumero=999;
	
	for(i = 0; i < SIZE; i++){
		
		printf("\nDigite o %dº número: ",i+1);
		scanf("%d",&numero[i]);
		
		if(numero[i] > maiorNumero){
		
			maiorNumero = vetor[i];
		
		}if(numero[i] < menorNumero){
		
			menorNumero = vetor[i];

		}
		
	}
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i = 0; i < SIZE; i++){
		
		printf("\nNúmero %d: %d", i+1, numero[i]);
		
	}

	printf("\nMaior número: %d",maiorNumero);
	printf("\nMenor número: %d",menorNumero);
	
	return 0;
	
}
