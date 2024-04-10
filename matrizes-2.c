#include <stdio.h>
#include <locale.h>
#include <string.h> 

#define QUANTIDADE_DE_DISCIPLINAS 3
#define QUANTIDADE_DE_NOTAS 2

int main(){
	
	setlocale(LC_ALL,"");
	
	int i, j;
	float nota[QUANTIDADE_DE_DISCIPLINAS][QUANTIDADE_DE_NOTAS], media[QUANTIDADE_DE_DISCIPLINAS], soma=0;
	char disciplina[QUANTIDADE_DE_DISCIPLINAS][200];
	
	for(i = 0; i < QUANTIDADE_DE_DISCIPLINAS; i++){
		
		printf("\nDigite o nome da %dª disciplina: ",i+1);
		gets(disciplina[i]);
		
		fflush(stdin);
		
		for(j = 0; j < QUANTIDADE_DE_NOTAS; j++){
			
			printf("\nDigite a %dª nota: ",j+1);
			scanf("%f",&nota[i][j]);
			
			soma += nota[i][j];
			
		}
		
		media[i] = soma / j;
		soma = 0;
	}
	

	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i = 0; i < QUANTIDADE_DE_DISCIPLINAS; i++){
		
		printf("\n%dª Disciplina: %s\n",i+1,disciplina[i]);
		
		for(j = 0; j < QUANTIDADE_DE_NOTAS; j++){
			
			printf("\n%dª Nota: %.1f",j+1,nota[i][j]);
		
		}
		
		printf("\nMédia: %.1f",media[i]);
		
		if(media[i] >= 7){
			
			printf("\nAprovado");
			
		}else if(media[i] >= 5 && media[i] < 7){
		
			printf("\nRecuperação");
			
		}else{
			
			printf("\nReprovado");
		
		}
		
		printf("\n");
	
	}
	
	return 0;
	
}
