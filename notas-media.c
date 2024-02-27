#include <stdio.h>

	int main(){
	
	//Declarar Variáveis
	char nome[200];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, quartaNota, media;
	
	//Solicitar Dados
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	printf("Digite a primeira nota: ");
	scanf("%f", &primeiraNota);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &segundaNota);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &terceiraNota);
	
	printf("Digite a quarta nota: ");
	scanf("%f", &quartaNota);
	
	//Realizar cálculo da média
	media = (primeiraNota + segundaNota + terceiraNota +  quartaNota)/4;
	
	//Exibir dados
	printf("Aluno: %s \n", nome);
	printf("Idade: %i \n", idade);
	printf("primeiraNota: %f \n", primeiraNota);
	printf("segundaNota: %f \n", segundaNota);
	printf("terceiraNota: %f \n", terceiraNota);
	printf("quartaNota: %f \n", quartaNota);
	printf("\Média: %f \n", media);

	return 0;

	}
	
