#include <stdio.h>
#include <locale.h>

#define QUANTIDADE_DE_NUMEROS 5

int main(){
	
	setlocale(LC_ALL,"");
	
	int numero[QUANTIDADE_DE_NUMEROS], i, contadorPares=0, contadorImpares=0, contadorPositivos=0; 
	int contadorNegativos=0, maiorNumero=0, menorNumero=999, somaPares=0, somaImpares=0;
	int somaGeral=0, numeroInverso[QUANTIDADE_DE_NUMEROS];
	float mediaPares, mediaImpares, mediaGeral;
	
	for(i=0;i<QUANTIDADE_DE_NUMEROS;i++){
		
		printf("\nDigite o %dº número: ",i+1);
		scanf("%d",&numero[i]);
		
		if(numero[i]%2 == 0){
			
			contadorPares++;
			somaPares += numero[i];
			
		}else{
			
			contadorImpares++;
			somaImpares += numero[i];
			
		}
		
		if(numero[i] > 0){
			
			contadorPositivos++;
			
		}else{
			
			contadorNegativos++;
			
		}
		
		if(numero[i] > maiorNumero){
			
			maiorNumero = numero[i];
			
		}
		
		if(numero[i] < menorNumero){
			
			menorNumero = numero[i];
			
		}
		
		somaGeral += numero[i];
		
	}
	
	mediaPares = somaPares / (float)contadorPares;
	mediaImpares = somaImpares / (float)contadorImpares;
	mediaGeral = somaGeral / (float)QUANTIDADE_DE_NUMEROS;
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	printf("\nQuantidade de números pares: %d",contadorPares);
	printf("\nQuantidade de números ímpares: %d",contadorImpares);
	printf("\nQuantidade de números positivos: %d",contadorPositivos);
	printf("\nQuantidade de números negativos: %d",contadorNegativos);
	printf("\nQuantidade de números inseridos: %d",QUANTIDADE_DE_NUMEROS);
	printf("\nMaior número: %d",maiorNumero);
	printf("\nMenor número: %d",menorNumero);
	printf("\nMedia de números pares: %.1f",mediaPares);
	printf("\nMedia de números ímpares: %.1f",mediaImpares);
	printf("\nMedia de todos os números inseridos: %.1f\n",mediaGeral);
	
	printf("\nNúmeros inseridos em ordem inversa: \n");
	
	for(i=0;i<QUANTIDADE_DE_NUMEROS;i++){

		numeroInverso[i] = numero[QUANTIDADE_DE_NUMEROS-i-1];
		printf("%dº Número: %d\n",i+1,numeroInverso[i]);
		
	}
	
	return 0;	
		
	}

