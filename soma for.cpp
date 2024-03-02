#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin);
	
}

int main(){
	
	setlocale(LC_ALL,"");
	
	//Declarar variáveis
	
	int i, soma, primeiroNumero, segundoNumero, terceiroNumero, quartoNumero, quintoNumero;
	
	//Solicitar dados ao usuário
	
	cabecalho();
	printf("Digite o primeiro número: ");
	scanf("%d",&primeiroNumero);
	
	cabecalho();
	printf("Digite o segundo número: ");
	scanf("%d",&segundoNumero);
	
	cabecalho();
	printf("Digite o terceiro número: ");
	scanf("%d",&terceiroNumero);
	
	cabecalho();
	printf("Digite o quarto número: ");
	scanf("%d",&quartoNumero);
	
	cabecalho();
	printf("Digite o quinto número: ");
	scanf("%d",&quintoNumero);
	system("cls||clear");
	
	//Apresentar soma de todos os números
	
	cabecalho();
	
	for(i=1;i<=1;i++){
    
        printf("%d + %d + %d + %d + %d = %d\n",primeiroNumero,segundoNumero,terceiroNumero,quartoNumero,quintoNumero,primeiroNumero+segundoNumero+terceiroNumero+quartoNumero+quintoNumero);
      
	}
	
	return 0;


}
