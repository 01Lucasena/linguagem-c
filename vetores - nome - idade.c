#include <stdio.h>
#include <locale.h>

#define SIZE 5
#define STRING 200

int main(){
	
	setlocale(LC_ALL,"");
	
	char nome[SIZE][STRING];
	int i, idade[SIZE];
	
	for(i=0;i<SIZE;i++){
		
		printf("\nDigite o %dº nome: ",i+1);
		scanf("%s",&nome[i]);
		
		printf("\nDigite a %dª idade: ",i+1);
		scanf("%d",&idade[i]);
	}
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i=0;i<SIZE;i++){
		
		printf("\n\n%d° Nome: %s",i+1,nome[i]);
		printf("\n%dª Idade: %d",i+1,idade[i]);
	}
	
	return 0;
	
}
