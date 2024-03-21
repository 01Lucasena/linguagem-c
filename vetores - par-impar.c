#include <stdio.h>
#include <locale.h>

#define SIZE 5

int main (){
	
	setlocale(LC_ALL,"");
	
	int i, vetor[SIZE], pares=0, impares=0;
	
	
	for(i=0;i<SIZE;i++){
		
		printf("\nDigite o %dº número: ",i+1);
		scanf("%d",&vetor[i]);
		
		vetor[i] % 2 == 0 ? pares++ : impares++;
		
	}
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i=0;i<SIZE;i++){
		
		printf("\n%d° Número: %d",i+1,vetor[i]);
		
	}
	
	vetor[i] % 2 == 0 ? printf("\nPar: %d",i+1,vetor[i]) : printf("\nÍmpar: %d",i+1,vetor[i]);

	printf("\n\nQuantidade de pares: %d",pares);
	
	printf("\nQuantidade de impares: %d",impares);
	
	return 0;
	
}
