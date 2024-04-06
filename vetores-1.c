#include <stdio.h>
#include <locale.h>

#define SIZE 5

int main(){
	
	int i, vetor[SIZE];
	
	printf("Digite os elementos do vetor \n");
	
	for(i = 0; i < SIZE; i ++){
		
		printf("Elemento %d: ", i+1);
		scanf("%d",&vetor[i]);
		
	}
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i = 0; i < SIZE; i ++){
		
		
			printf("Elemento %d: %d\n", i+1, vetor[i]);
			
	}
	
	return 0;

}
