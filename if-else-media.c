#include <stdio.h>
#include <stdlib.h>

void cabecalho (){
	
	system("cls||clean");
	printf("\n===SENAI===\n");
	 
}

int main(){
	
	//Declarar vari�veis
	
	char nome[200];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, media;
	
	//Solicitar dados ao usu�rio
	
	cabecalho();
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	cabecalho();
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	cabecalho();
	printf("Digite a primeira nota: ");
	scanf("%f", &primeiraNota);
	
	cabecalho();
	printf("Digite a segunda nota: ");
	scanf("%f", &segundaNota);
	
	cabecalho();
	printf("Digite a terceira nota: ");
	scanf("%f", &terceiraNota);
	system("cls||clean");
	
	//Calcular m�dia do aluno
	
	media = (primeiraNota + segundaNota + terceiraNota) / 3;
	
	//Exibir dados ao usu�rio
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	printf("Nome: %s\n", nome);
	printf("Idade: %i\n", idade);
	printf("Media: %.2f\n", media);
	
	if(media>=7){
		
		printf("Aluno aprovado\n");
		
	}else{
		
		printf("Aluno reprovado\n");
		
	}
	
	return 0;
}
