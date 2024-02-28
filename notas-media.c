#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin); 
	
}

int main(){
	
	//Declarar Variáveis
	
	char nome[200];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, quartaNota, media;
	
	//Solicitar Dados
	
	cabecalho();
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	
	cabecalho();
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	cabecalho();
	printf("Digite a primeira nota: ");
	scanf("%f",&primeiraNota);
	
	cabecalho();
	printf("Digite a segunda nota: ");
	scanf("%f",&segundaNota);
	
	cabecalho();
	printf("Digite a terceira nota: ");
	scanf("%f",&terceiraNota);
	
	cabecalho();
	printf("Digite a quarta nota: ");
	scanf("%f",&quartaNota);
	system("cls||clear");
	
	//Realizar cálculo da média
	
	media = (primeiraNota + segundaNota + terceiraNota +  quartaNota)/4;
	
	//Exibir dados
	
	printf("\n===EXIBINDO DADOS===\n");
	printf("Aluno: %s \n",nome);
	printf("Idade: %i \n",idade);
	printf("primeiraNota: %.2f \n",primeiraNota);
	printf("segundaNota: %.2f \n",segundaNota);
	printf("terceiraNota: %.2f \n",terceiraNota);
	printf("quartaNota: %.2f \n",quartaNota);
	printf("\Media: %.2f \n",media);

	return 0;

	}
	
