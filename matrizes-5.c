#include <stdio.h>
#include <locale.h>
#include <string.h>

#define QUANTIDADE_DE_BANDAS 3
#define QUANTIDADE_DE_INTEGRANTES 5

int main(){
	
	setlocale(LC_ALL,"");
	
	int i, j;
	char nomeBanda[QUANTIDADE_DE_BANDAS][200], nomeIntegrante[QUANTIDADE_DE_BANDAS][QUANTIDADE_DE_INTEGRANTES][200];
	
	for(i = 0; i < QUANTIDADE_DE_BANDAS; i++){
		
		printf("\nDigite o nome da %dª banda: ",i+1);
		gets(nomeBanda[i]);
		
		for(j = 0; j < QUANTIDADE_DE_INTEGRANTES; j++){
			
			printf("\nDigite o nome do %dº integrante: ",j+1);
			gets(nomeIntegrante[i][j]);
			
		}
	}
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i = 0; i < QUANTIDADE_DE_BANDAS; i++){
		
		printf("\nBanda %d: %s",i+1,nomeBanda[i]);
		
		for(j = 0; j < QUANTIDADE_DE_INTEGRANTES; j++){
			
			printf("\n%dº Integrante: %s",j+1,nomeIntegrante[i][j]);	
			
		}
		
		printf("\n");
		
	}

	return 0;
	
}
