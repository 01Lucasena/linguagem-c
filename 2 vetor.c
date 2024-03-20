#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int i, vetor[3];
	
	
	for(i = 0; i < 3; i++){
		
		printf("\nDigite a %dª nota: ",i+1);
		scanf("%d",&vetor[i]);
		
	}
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i = 0; i < 3; i++){
		
		printf("\n%dª Nota: %d",i + 1, vetor[i]);
		
	}

	return 0;
	
}
