#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	
	int i, j, soma=0;
	char nome[4][200];
	float notas[4][3], media[4];
	
	for(i=0;i<4;i++){
		
		printf("\nDigite o nome do aluno: ");
		scanf("%s",&nome[i]);
		
		for(j=0;j<3;j++){
			
			printf("\nDigite a %d� nota: ",j+1);
			scanf("%f",&notas[i][j]);
			
			soma += notas[i][j];
			
		}
		
		media[i] = soma/j;
		soma=0;
	
	}
	
	

	
	printf("\n===EXIBINDO NOTAS===\n");
	
	for(i=0;i<4;i++){
		
		printf("\n%d� Aluno: %s",i+1,nome[i]);
		
		for(j=0;j<3;j++){
			
			printf("\n%d� Nota: %.1f",j+1,notas[i][j]);
			
		
		}
		
		
		printf("\nM�dia: %.1f",media[i]);
		
	}
	
	return 0;
}
