#include <stdio.h>
#include <locale.h>

#define QUANTIDADE_DE_NOMES 2
#define QUANTIDADE_DE_NOTAS 3

int main(){
	
	setlocale(LC_ALL,"");
	
	int notas[QUANTIDADE_DE_NOMES][QUANTIDADE_DE_NOTAS], i, j;
	char nome[QUANTIDADE_DE_NOMES][200];
	
	for(i=0;i<QUANTIDADE_DE_NOMES;i++){
		
		printf("\nDigite seu nome: ");
		scanf("%s",&nome[i]);
		
		for(j=0;j<QUANTIDADE_DE_NOTAS;j++){
			
			printf("\nDigite a %dª nota: ",i+1);
			scanf("%d",&notas[i][j]);
			
		}
		
		
	}
	
	printf("\n===EXIBINDO NOTAS===\n");
	
	for(i=0;i<QUANTIDADE_DE_NOMES;i++){
		
		printf("\nAluno %d: %s\n",i+1,nome[i]);
		
		for(j=0;j<QUANTIDADE_DE_NOTAS;j++){
			
			printf("\n%dª Nota: %d\n",j+1,notas[i][j]);
			
		}
		
	}
	
	return 0;
}
