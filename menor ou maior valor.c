#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin);
	
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	//Declarar vari�veis
	
	int primeiroValor, segundoValor, media, soma, produto, maiorValor, menorValor;
	
	//Solicitar dados ao usu�rio
	
	cabecalho();
	printf("Digite o primeiro valor: ");
	scanf("%i",&primeiroValor);
	
	cabecalho();
	printf("Digite o segundo valor: ");
	scanf("%i",&segundoValor);
	system("cls||clear");
	
	//Calcular resultados
	
	media=(primeiroValor+segundoValor)/2;
	soma=primeiroValor+segundoValor;
	produto=primeiroValor*segundoValor;
	
	//Exibir dados ao usu�rio
	
	printf("M�dia: %i\n",media);
	printf("Soma: %i\n",soma);
	printf("Produto: %i\n",produto);
	
	if(primeiroValor>segundoValor){
		
		maiorValor=primeiroValor;
		menorValor=segundoValor;
		printf("Maior valor: %i\n",maiorValor);
		printf("Menor valor: %i\n",menorValor);
		
	}else{
		
		maiorValor=segundoValor;
		menorValor=primeiroValor;
		printf("Maior valor: %i\n",maiorValor);
		printf("Menor valor: %i\n",menorValor);
		
		
	}
	
	
	return 0;
	
}
