#include <stdio.h>

int main(){
	
	int i, vetor[5];
	
	printf("Digite os elementos do vetor \n");
	
	for(i = 0; i < 5; i ++){
		
		printf("Elemento %d: ", i+1);
		scanf("%d",&vetor[i]);
		
	}
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i = 0; i < 5; i ++){
		
		
			printf("Elemento %d: %d\n", i+1, vetor[i]);
			
	}
	
	return 0;

}
