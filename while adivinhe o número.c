#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int i, opcao, palpite, numeroCerto=56;
	
	while(1){
		
		i++;
		
		printf("\nDigite um n�mero entre 1 a 100: ");
		scanf("%d",&palpite);
			
		if(palpite == numeroCerto){
			 
			printf("\nPARAB�NS, voc� acertou o n�nmero secreto.\n");
			printf("\nN� de tentativas: %d",i); 	
		
			break;
		
		}else if(palpite > numeroCerto){
			
			printf("\nTente um n�mero menor.\n");
		
		}else if(palpite < numeroCerto){
			
			printf("\nTente um n�mero maior.\n");
			
		}else{
		
		printf("\nNenhum palpite foi adicionado.\n");
		
		
		break;
	}
	
	}
	
	
	
	return 0;
	
}
