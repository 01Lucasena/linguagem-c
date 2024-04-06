#include <stdio.h>
#include <locale.h>

#define QUANTIDADE_DE_ALUNOS 4
#define QUANTIDADE_DE_NOTAS 3


int main(){
	
	setlocale(LC_ALL,"");
	
	int i, j, soma=0;
	char aluno[QUANTIDADE_DE_ALUNOS][200];
	float nota[QUANTIDADE_DE_ALUNOS][QUANTIDADE_DE_NOTAS], media[4];
	
	for(i=0;i<QUANTIDADE_DE_ALUNOS;i++){
		
		printf("\nDigite o nome do aluno: ");
		scanf("%s",&aluno[i]);
		
		for(j=0;j<QUANTIDADE_DE_NOTAS;j++){
			
			printf("\nDigite a %dª nota: ",j+1);
			scanf("%f",&nota[i][j]);
			
			soma += nota[i][j];
			
		}
		
		media[i] = soma/j;
		soma=0;
	
	}
	
	printf("\n===EXIBINDO NOTAS===\n");
	
	for(i=0;i<QUANTIDADE_DE_ALUNOS;i++){
		
		printf("\n%d° Aluno: %s\n",i+1,aluno[i]);
		
		for(j=0;j<QUANTIDADE_DE_NOTAS;j++){
			
			printf("\n%dª Nota: %.1f\n",j+1,nota[i][j]);
			
		}
		
		printf("\nMédia: %.1f\n",media[i]);
		
	}
	
	return 0;
	
}
