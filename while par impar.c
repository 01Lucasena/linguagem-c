#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	//Declarar vari�veis
	int numero, soma=0, i=0, pares=0, impares=0, somaPares=0, somaImpares=0;
	float media, mediaPares, mediaImpares;
	
	//Solicitar dados ao usu�rio
	
	printf("Digite um n�mero: ");
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
	
		printf("Digite um n�mero: ");
		scanf("%d",&numero);
	
	}

	printf("\n===EXIBINDO RESULTADOS===\n");
	
	if (i==0){
		
		printf("N�o foi inserido um n�mero inteiro positivo.");
	
	}else{
		
		media = soma / (float)i;
		mediaPares = somaPares / (float)pares;
		mediaImpares = somaImpares / (float)impares;
		
		printf("M�dia geral dos n�meros lidos: %.2f",media);
		printf("\nN�meros pares: %d",pares);
		printf("\nM�dia dos n�meros pares: %.2f", mediaPares);
		printf("\nN�meros �mpares: %d",impares);
		printf("\nM�dia dos n�meros pares: %.2f", mediaImpares);
	}
	
	return 0;
	
}
