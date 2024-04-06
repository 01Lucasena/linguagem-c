#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin); 

}

int main(){

	//Declarar variáveis
	
	char nome[200];
	char sexo;
	int idade;
	float peso;
	
	//Solicitar dados ao usuário
	
	cabecalho();
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	
	fflush(stdin);
	
	cabecalho();
	printf("Digite seu sexo (M para masculino ou F para feminino): ");
	scanf("%c",&sexo);
	
	cabecalho();
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	cabecalho();
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	system("cls||clear");
	
	//Exibir dados
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	printf("Nome: %s\n",nome);	
	printf("Idade: %i\n",idade);
	printf("Sexo: %c\n",sexo);
	printf("Peso: %.2f\n",peso);

	return 0;
}
