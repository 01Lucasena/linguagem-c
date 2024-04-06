#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin); 
	
}

int main(){
	
	//Declarar variáveis
	
	float salario;
	int quantidadeDeSalarios;
	
	//Solicitar dados aou usuario

	cabecalho();
	printf("Informe o valor do seu salario: ");
	scanf("%f",&salario);
	system("cls||clear");
	
	//Verificar quantos salarios mininimos o usuario recebe
	
	quantidadeDeSalarios = salario / 1412 ;
	
	//Exibir dados
	
	printf("\n===EXIBINDO RESULTADOS===\n");
	printf("Salario: R$ %.2f\n",salario);
	printf("Numero de salarios minimos: %i\n", quantidadeDeSalarios);

	return 0;
}

