#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



//criando função do tipo float para calculo de média salarial

float calcularMediaSalarial(int contador, float soma){
	
	return soma / contador;

}

//função principal

int main(){
	 
	 //comando que reconhece caracteres da língua portuguesa
	 
	 setlocale(LC_ALL,"");
	 
	 //declarar variáveis
	 
	 int opcao, contador=0, idade, mulheresMaiorSalario=0, maiorIdade=-1, menorIdade=-1;
	 char sexo;
	 float salario, mediaSalarial, soma=0;
	 
	 //solicitar dados ao usuário
	 
		
	
		while(1){ //condiçao para o loop (será quebrado quando o usuário digitar a opção 2) 
	 
		 //menu para seleção de opções
	 	
	 	printf("Tecle '1' para adicionar uma pessoa ou '2' para tela de resultados: ");
	 	scanf("%d",&opcao);
	 
	 		if(opcao==1){ 
	 	
	 			printf("\nDigite sua idade: ");
	 			scanf("%d",&idade);
	 			
	 			if(maiorIdade == -1 || idade > maiorIdade){
	 					
	 					maiorIdade = idade;
	 					
				}if(menorIdade == -1 || idade < menorIdade){
					 	
					 	menorIdade = idade;
					 	
				}
	 			
	 			fflush(stdin);
	 			
				printf("Digite seu sexo (tecle 'M' ou 'F'): ");
	 			scanf("%c",&sexo);
	 
	 			printf("Digite o valor do seu salário: ");
	 			scanf("%f",&salario);
	 			
	 			if(sexo == 'F' && salario>=5000){
	 				
	 				mulheresMaiorSalario++;
	 				
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
					printf("\nMulheres com salário acima de R$5.000: %.d",mulheresMaiorSalario);
			
				}
			
			break;
			
			}else{
				
				printf("\nOpção inválida.");
			
			}
			
	 	}
	 
	 return 0;
	 
}
