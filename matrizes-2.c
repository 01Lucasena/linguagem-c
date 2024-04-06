#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define QUANTIDADE_DE_DISCIPLINAS 3
#define QUANTIDADE_DE_NOTAS 2

int main(){
	
	setlocale(LC_ALL,"");
	
	char disciplina[QUANTIDADE_DE_DISCIPLINAS][200];
	float notas[QUANTIDADE_DE_DISCIPLINAS][QUANTIDADE_DE_NOTAS], soma=0, media[QUANTIDADE_DE_DISCIPLINAS];
	int i, j;
	
	
	for(i=0;i<QUANTIDADE_DE_DISCIPLINAS;i++){
		
		printf("\nDigite o nome da disciplina: ");
		scanf("%s",&disciplina[i]);
		
		fflush(stdin);
		
		for(j=0;j<QUANTIDADE_DE_NOTAS;j++){
			
			printf("\nDigite a %dª nota: ",j+1);
			scanf("%f",&notas[i][j]);
			
			soma += notas[i][j];
		}
		
		media[i] = soma / j;
		soma = 0;
	}
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i=0;i<QUANTIDADE_DE_DISCIPLINAS;i++){
		
		printf("\nDisciplina %d: %s\n",i+1,disciplina[i]);
		
		
		for(j=0;j<QUANTIDADE_DE_NOTAS;j++){
			
			printf("\n%dª Nota: %.1f\n",j+1,notas[i][j]);
			
		}
		
		printf("\nMédia: %.1f\n",media[i]);
	
	}
	
	return 0;
}
