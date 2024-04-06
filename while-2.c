#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int i, opcao, palpite, numeroCerto=56;
	
	while(1){
		
		i++;
		
		printf("\nDigite um número entre 1 a 100: ");
		scanf("%d",&palpite);
			
		if(palpite == numeroCerto){
			 
			printf("\nPARABÉNS, você acertou o núnmero secreto.\n");
			printf("\nNº de tentativas: %d",i); 	
		
			break;
		
		}else if(palpite > numeroCerto){
			
			printf("\nTente um número menor.\n");
		
		}else if(palpite < numeroCerto){
			
			printf("\nTente um número maior.\n");
			
		}else{
		
		printf("\nNenhum palpite foi adicionado.\n");
		
		
		break;
	}
	
	}
	
	
	
	return 0;
	
}
