#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	//Declarar variáveis
	int i=0, valor, soma=0; 
	float media;
	
	//Solicitar dados ao usuário
	printf("Digite um valor: ");
	scanf("%d",&valor);
	
	
	
	while(valor>0){
		
		i++;
		soma += valor;
		printf("Digite um valor: ");
		scanf("%d",&valor);	
	
	}
	
	if (i == 0){
	
		printf("Não foi informado um número positivo");
	
	}else{

	media = soma / i;
	printf("\n===EXIBINDO RESULTADOS===\n");
	printf("\nMédia: %.2f",media);
	
	}
	
	return 0;
	
}
