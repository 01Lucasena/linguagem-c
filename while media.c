#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	//Declarar vari�veis
	int i=0, valor, soma=0; 
	float media;
	
	//Solicitar dados ao usu�rio
	printf("Digite um valor: ");
	scanf("%d",&valor);
	
	
	
	while(valor>0){
		
		i++;
		soma += valor;
		printf("Digite um valor: ");
		scanf("%d",&valor);	
	
	}
	
	if (i == 0){
	
		printf("N�o foi informado um n�mero positivo");
	
	}else{

	media = soma / i;
	printf("\n===EXIBINDO RESULTADOS===\n");
	printf("\nM�dia: %.2f",media);
	
	}
	
	return 0;
	
}
