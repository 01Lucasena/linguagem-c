#include <stdio.h>
#include <locale.h>

#define SIZE 3

int main(){
	
	setlocale(LC_ALL,"");
	
	int i, vetor[SIZE];
	
	
	for(i = 0; i < SIZE; i++){
		
		printf("\nDigite a %dª nota: ",i+1);
		scanf("%d",&vetor[i]);
		
	}
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i = 0; i < SIZE; i++){
		
		printf("\n%dª Nota: %d",i + 1, vetor[i]);
		
	}

	return 0;
	
}
