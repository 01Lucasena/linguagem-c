#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int i, vetor[5], maiorNumero=0, menorNumero=999;
	
	for(i = 0; i < 5; i++){
		
		printf("\nN�mero %d: ",i+1);
		scanf("%d",&vetor[i]);
		
		if(vetor[i] > maiorNumero){
		
			maiorNumero = vetor[i];
		
		}if(vetor[i] < menorNumero){
		
			menorNumero = vetor[i];

		}
		
	}
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i = 0; i < 5; i++){
		
		printf("\nN�mero %d: %d", i+1, vetor[i]);
		
	}

	printf("\nMaior n�mero: %d",maiorNumero);
	printf("\nMenor n�mero: %d",menorNumero);
	
	return 0;
	
}
