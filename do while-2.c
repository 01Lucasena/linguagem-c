#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");

	//declarar variáveis
	
	int i;
	float nota, soma=0, media;
	
	//solicitar dados ao usuário
	
	for(i=1;i<=2;i++){
	
	do{
	
		printf("Digite a %dª nota: ",i);
		scanf("%f",&nota);
		
		fflush(stdin);
		
	
	
	}while(nota<0||nota>10);
	
	soma += nota;

	}
	
	media = soma / 2;
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	printf("\nMédia: %.2f",media);
	
	return 0;

}
