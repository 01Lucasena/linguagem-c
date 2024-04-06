#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


// criar função para calculo da média salárial

float calcularMediaSalarialDaPopulacao(int contadorFamilias, float somaDosSalarios){
	
	return somaDosSalarios/contadorFamilias;

}

//criar função para calcular média de filhos por família

int calcularMediaDoNumeroDeFilhos(int totalDeFilhos, int contadorFamilias){
	
	return totalDeFilhos/contadorFamilias;
	
}

// função principal

int main(){
	
	setlocale(LC_ALL,"");
	
	//declarar variáveis
	
	int opcao, contadorFamilias=0, numeroDeFilhos=0, totalDeFilhos, mediaNumeroDeFilhos;
	float mediaSalarialDaPopulacao, salarioFamilia, salarioPopulacao, somaDosSalarios=0, maiorSalario=-1, menorSalario=-1;
	
	
	//menu de opções
	
	while (1){
		
		printf("\nDigite '1' para adicionar uma nova família ou '2' para exibir tela de resultados: ");
		scanf("%d",&opcao);
		
	
		if(opcao==1){
			
			printf("\nInforme o salário da família: ");
			scanf("%f",&salarioFamilia);
			
			printf("\nDigite a quantidade de filhos: ");
			scanf("%d",&numeroDeFilhos);
			
			
			
			if(maiorSalario == -1 || salarioFamilia > maiorSalario){
				
				maiorSalario = salarioFamilia;
				
			}if(menorSalario == -1 || salarioFamilia < menorSalario){
				
				menorSalario = salarioFamilia;
				
			}
			
			totalDeFilhos += numeroDeFilhos;
			somaDosSalarios += salarioFamilia;
			contadorFamilias++;
			
		}else if(opcao==2){
			
			if(contadorFamilias==0){
				
				printf("\nNenhuma família adicionada.");
				
			}else{
				
				mediaSalarialDaPopulacao = calcularMediaSalarialDaPopulacao(contadorFamilias,somaDosSalarios);
				mediaNumeroDeFilhos = calcularMediaDoNumeroDeFilhos(totalDeFilhos,contadorFamilias);
				
				printf("\n===EXIBINDO RESULTADOS===\n");
				printf("\nTotal de famílias que responderam a pesquisa: %d",contadorFamilias);
				printf("\nMédia de salário da população: R$%.2f",mediaSalarialDaPopulacao);
				printf("\nMédia de filhos por família: %d",mediaNumeroDeFilhos);
				printf("\nMenor salário: R$%.2f",menorSalario);
				printf("\nMaior salário: R$%.2f",maiorSalario);
				
			}
			
			break;
		
		}else{
			
			printf("\nOpção inválida");
		}
	}

	
	return 0;


}



