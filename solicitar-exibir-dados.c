#include <stdio.h>

int main(){
	//Declarar variáveis
	char nome[200];
	char sexo;
	int idade;
	float peso;
	
	//Solicitar dados ao usuário
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	fflush(stdin);
	
	printf("Digite seu sexo (M para masculino ou F para feminino): ");
	scanf("%c", &sexo);
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	//Exibir dados
	
	printf("\n>>>EXIBINDO DADOS<<<\n");
	printf("Nome: %s\n", nome);	
	printf("Idade: %i\n", idade);
	printf("Sexo: %c\n", sexo);
	printf("Peso: %.2f\n", peso);

	return 0;
}
