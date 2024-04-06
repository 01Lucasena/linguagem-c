#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	//Declarar variáveis
	int numero, soma=0, i=0, pares=0, impares=0, somaPares=0, somaImpares=0;
	float media, mediaPares, mediaImpares;
	
	//Solicitar dados ao usuário
	
	printf("Digite um número: ");
	scanf("%d",&numero);
	
	while(numero!=0){
		
		if (numero>0){
		
			i++;
			soma += numero;
	
			if(numero%2==0){
		
				pares++;
				somaPares += numero;
		
			}else{
				
				impares++;
				somaImpares += numero;
				
			}
	
		}
	
		printf("Digite um número: ");
		scanf("%d",&numero);
	
	}

	printf("\n===EXIBINDO RESULTADOS===\n");
	
	if (i==0){
		
		printf("Não foi inserido um número inteiro positivo.");
	
	}else{
		
		media = soma / (float)i;
		mediaPares = somaPares / (float)pares;
		mediaImpares = somaImpares / (float)impares;
		
		printf("Média geral dos números lidos: %.2f",media);
		printf("\nNúmeros pares: %d",pares);
		printf("\nMédia dos números pares: %.2f", mediaPares);
		printf("\nNúmeros ímpares: %d",impares);
		printf("\nMédia dos números pares: %.2f", mediaImpares);
	}
	
	return 0;
	
}
