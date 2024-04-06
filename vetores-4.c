#include <stdio.h>
#include <locale.h>

#define SIZE 5

int main(){
	
	setlocale(LC_ALL,"");
	
	int i, vetor[SIZE], maiorNumero=0, menorNumero=999;
	
	for(i = 0; i < SIZE; i++){
		
		printf("\nNúmero %d: ",i+1);
		scanf("%d",&vetor[i]);
		
		if(vetor[i] > maiorNumero){
		
			maiorNumero = vetor[i];
		
		}if(vetor[i] < menorNumero){
		
			menorNumero = vetor[i];

		}
		
	}
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i = 0; i < SIZE; i++){
		
		printf("\nNúmero %d: %d", i+1, vetor[i]);
		
	}

	printf("\nMaior número: %d",maiorNumero);
	printf("\nMenor número: %d",menorNumero);
	
	return 0;
	
}
