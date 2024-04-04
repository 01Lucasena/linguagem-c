#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define DISCIPLINAS 3
#define NOTAS 2

int main(){
	
	setlocale(LC_ALL,"");
	
	char disciplina[DISCIPLINAS][200];
	float notas[DISCIPLINAS][NOTAS], soma=0, media[DISCIPLINAS];
	int i, j;
	
	
	for(i=0;i<DISCIPLINAS;i++){
		
		printf("\nDigite o nome da disciplina: ");
		scanf("%s",&disciplina[i]);
		
		fflush(stdin);
		
		for(j=0;j<NOTAS;j++){
			
			printf("\nDigite a %dª nota: ",j+1);
			scanf("%f",&notas[i][j]);
			
			soma += notas[i][j];
		}
		
		media[i] = soma / j;
		soma = 0;
	}
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i=0;i<DISCIPLINAS;i++){
		
		printf("\nDisciplina %d: %s",i+1,disciplina[i]);
		
		
		for(j=0;j<NOTAS;j++){
			
			printf("\n%dª Nota: %.1f",j+1,notas[i][j]);
			
		}
		
		printf("\nMédia: %.1f",media[i]);
	
	}
	
	return 0;
}
