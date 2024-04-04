#include <stdio.h>
#include <locale.h>

int main(){
	
	int notas[2][3], i, j;
	char nome[2][200];
	
	for(i=0;i<2;i++){
		
		printf("\nDigite seu nome: ");
		scanf("%s",&nome[i]);
		
		for(j=0;j<3;j++){
			
			printf("\nDigite a %dª nota: ",i+1);
			scanf("%d",&notas[i][j]);
			
		}
		
		
	}
	
	printf("\n===EXIBINDO NOTAS===\n");
	
	for(i=0;i<2;i++){
		
		printf("\n-%s",nome[i]);
		
		for(j=0;j<3;j++){
			
			printf("\n%dª Nota: %d",j+1,notas[i][j]);
			
		}
		
	}
	
	return 0;
}
