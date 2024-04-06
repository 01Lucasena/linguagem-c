#include <stdio.h>
#include <locale.h>

#define SIZE 5

int main (){
	
	setlocale(LC_ALL,"");
	
	int i, numero[SIZE], contadorPares=0, contadorImpares=0;
	
	
	for(i=0;i<SIZE;i++){
		
		printf("\nDigite o %dº número: ",i+1);
		scanf("%d",&numero[i]);
		
		numero[i] % 2 == 0 ? contadorPares++ : contadorImpares++;
		
	}
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i=0;i<SIZE;i++){
		
		printf("\n%d° Número: %d",i+1,numero[i]);
		
	}
	
	numero[i] % 2 == 0 ? printf("\nPar: %d",i+1,numero[i]) : printf("\nÍmpar: %d",i+1,numero[i]);

	printf("\n\nQuantidade de pares: %d",contadorPares);
	
	printf("\nQuantidade de ímpares: %d",contadorImpares);
	
	return 0;
	
}
