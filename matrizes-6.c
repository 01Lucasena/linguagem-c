#include <stdio.h>
#include <locale.h>
#include <string.h>

#define QUANTIDADE_DE_DISCIPLINAS 3
#define QUANTIDADE_DE_NOTAS 3

int main(){
	
	setlocale(LC_ALL,"");
	
	int i, j;
	float notaDisciplina[QUANTIDADE_DE_DISCIPLINAS][QUANTIDADE_DE_NOTAS], mediaNotas[QUANTIDADE_DE_DISCIPLINAS], somaNotas = 0, notaPeso = 0, peso[3] = {3,3,4};
	char nomeDisciplina[QUANTIDADE_DE_DISCIPLINAS][200];
	
	for(i = 0; i < QUANTIDADE_DE_DISCIPLINAS; i++){
		
		printf("\nDigite o nome da %dª discilpina: ",i+1);
		gets(nomeDisciplina[i]);
		
		for(j = 0; j < QUANTIDADE_DE_NOTAS; j++){
			
			printf("\nDigite a %dª nota: ",j+1);
			scanf("%f",&notaDisciplina[i][j]);
			
			fflush(stdin);
			
			if(notaDisciplina[i][j] >= 0 && notaDisciplina[i][j] <= 10){
				
				notaPeso = notaDisciplina[i][j] * peso[j];
				somaNotas += notaPeso;
				
			}else{ printf("\nNota digitada inválida."); }	
		}
	
		mediaNotas[i] = somaNotas / 10;
		
		somaNotas = 0;
		notaPeso = 0;
			
	}
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i = 0; i < QUANTIDADE_DE_DISCIPLINAS; i++){
		
		printf("\nNome da disciplina: %s",nomeDisciplina[i]);
	
		for(j = 0; j < QUANTIDADE_DE_NOTAS; j++){
			
			printf("\n%dª Nota: %.2f",j+1,notaDisciplina[i][j]);
		
		}
		
		printf("\nMédia ponderada: %.2f",mediaNotas[i]);
		
		printf("\n");
			
	}
	
	return 0;
}

