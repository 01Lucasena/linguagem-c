#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	 
	 setlocale(LC_ALL,"");
	 
	 //Declarar variáveis
	 
	 int contador, idade, continua;
	 char sexo;
	 float salario, soma=0, mediaSalarial;
	 
	 //Solicitar dados ao usuário
	 
	 printf("Digite sua idade: ");
	 scanf("%d",&idade);
	 
	 fflush(stdin);
	
	 printf("Digite seu sexo (tecle 'M' ou 'F'): ");
	 scanf("%c",&sexo);
	 
	 printf("Digite o valor do seu salário: ");
	 scanf("%f",&salario);
	 
	 fflush(stdin);
	 
	 printf("Tecle '1' para continuar ou '2' para tela de resultados: ");
	 scanf("%d",&continua);
	 
	 
	 while(continua==1){
	 	
	 	soma += salario;
	 	contador++;
	 	
	 	printf("\nDigite sua idade: ");
	 	scanf("%d",&idade);
	 	
	 	fflush(stdin);
	 
		 printf("Digite seu sexo (tecle 'M' ou 'F'): ");
	 	scanf("%c",&sexo);
	 
	 	printf("Digite o valor do seu salário: ");
	 	scanf("%f",&salario);
	 	
	 	fflush(stdin);
	 
	 	printf("Tecle '1' para continuar ou '2' para tela de resultados: ");
	 	scanf("%c",&continua);
	
	 }
	 
	 mediaSalarial = soma / (float)contador;
	 printf("Média salarial: %.2f",mediaSalarial);
	 
	 
	 return 0;
	 
}
