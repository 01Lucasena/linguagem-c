#include <stdio.h>

int main(){
	//Declarar variáveis
	float salario;
	int quantidadeDeSalarios;
	
	//Solicitar dados aou usuario
	printf("Informe o valor do seu salario: ");
	scanf("%f", &salario);
	
	//Verificar quantos salarios mininimos o usuario recebe
	quantidadeDeSalarios = salario / 1412 ;
	
	//Exibir dados
	printf("\n>>>EXIBIR DADOS<<<\n");
	printf("Salario: R$ %.2f\n", salario);
	printf("Numero de salarios minimos: %i\n", quantidadeDeSalarios);



	return 0;
}

