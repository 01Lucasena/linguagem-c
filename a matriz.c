#include <stdio.h>
#include <locale.h>

#define SIZE 2

int main(){
	
	setlocale(LC_ALL,"");
	
	int numeros[SIZE][SIZE], i, j;
	
	printf("Digite os elementos para a matriz:\n");
	
	for(i=0;i<SIZE;i++){
		
		for(j=0;j<SIZE;j++){
			
			printf("\nElemento da linha %d coluna %d: ",i+1,j+1);
			scanf("%d",&numeros[i][j]);
		}
		
	}
	
	printf("\n===EXIBINDO NÚMEROS===\n");
	
	for(i=0;i<SIZE;i++){
		
		for(j=0;j<SIZE;j++){
			
			printf("\nElemento da linha %d coluna %d: %d\n",i+1,j+1,numeros[i][j]);
		}
	}
	
	return 0;
}
