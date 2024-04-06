#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


float calcularMediaSalarial(int contador, float soma){
	
	return soma / contador;

}

int main(){
	
	setlocale(LC_ALL,"");
	
	int opcao, contador=0, idade, mulheresSalario5k=0, maiorIdade=0, menorIdade=999;
	char sexo;
	float salario, mediaSalarial, soma=0;
	 
	while(1){ 
	 
	 	printf("\nCódigo \t Descrição \n");
	 	printf("1 \t Adicionar pessoa \n");
	 	printf("2 \t Exibir resultados e sair \n");
	 	printf("\nDigite a opção desejada: ");
	 	scanf("%d",&opcao);
	 
	 	if(opcao==1){ 
	 	
	 		printf("\nDigite sua idade: ");
	 		scanf("%d",&idade);
	 			
	 		if(idade > maiorIdade){
	 					
	 				maiorIdade = idade;
	 					
			}if(idade < menorIdade){
					 	
					menorIdade = idade;
					 	
			}
	 			
	 		fflush(stdin);
	 			
			printf("Digite seu sexo (tecle 'M' ou 'F'): ");
	 		scanf("%c",&sexo);
	 			
	 		sexo = toupper(sexo);
	 
	 		printf("Digite o valor do seu salário: ");
	 		scanf("%f",&salario);
	 			
	 		if(sexo == 'F' && salario>=5000){
	 				
	 			mulheresSalario5k++;
	 				
			}
				 
			soma += salario;
			contador++;
				
			}else if(opcao == 2){
				
				if(contador == 0){
					
					printf("\nNenhuma pessoa adicionada.");
			
				}else{
					
					mediaSalarial = calcularMediaSalarial(contador,soma);
					
					printf("\n===EXIBINDO RESULTADOS===\n");
					printf("\nMédia Salarial: R$%.2f", mediaSalarial);
					printf("\nMaior Idade: %d",maiorIdade);
					printf("\nMenor Idade: %d",menorIdade);
					printf("\nMulheres com salário acima de R$5.000: %d",mulheresSalario5k);
			
				}
			
			break;
			
			}else{
				
				printf("\nOpção inválida. \n");
			
			}
			
	 	}
	 
	 return 0;
	 
}
