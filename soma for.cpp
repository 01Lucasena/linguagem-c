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
	
	//Declarar vari�veis
	
	int i, soma, primeiroNumero, segundoNumero, terceiroNumero, quartoNumero, quintoNumero;
	
	//Solicitar dados ao usu�rio
	
	cabecalho();
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&primeiroNumero);
	
	cabecalho();
	printf("Digite o segundo n�mero: ");
	scanf("%d",&segundoNumero);
	
	cabecalho();
	printf("Digite o terceiro n�mero: ");
	scanf("%d",&terceiroNumero);
	
	cabecalho();
	printf("Digite o quarto n�mero: ");
	scanf("%d",&quartoNumero);
	
	cabecalho();
	printf("Digite o quinto n�mero: ");
	scanf("%d",&quintoNumero);
	system("cls||clear");
	
	//Apresentar soma de todos os n�meros
	
	cabecalho();
	
	for(i=1;i<=1;i++){
    
        printf("%d + %d + %d + %d + %d = %d\n",primeiroNumero,segundoNumero,terceiroNumero,quartoNumero,quintoNumero,primeiroNumero+segundoNumero+terceiroNumero+quartoNumero+quintoNumero);
      
	}
	
	return 0;


}
