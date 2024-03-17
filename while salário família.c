#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


// criar fun��o para calculo da m�dia sal�rial

float calcularMediaSalarialDaPopulacao(int contadorFamilias, float somaDosSalarios){
	
	return somaDosSalarios/contadorFamilias;

}

//criar fun��o para calcular m�dia de filhos por fam�lia

int calcularMediaDoNumeroDeFilhos(int totalDeFilhos, int contadorFamilias){
	
	return totalDeFilhos/contadorFamilias;
	
}

// fun��o principal

int main(){
	
	setlocale(LC_ALL,"");
	
	//declarar vari�veis
	
	int opcao, contadorFamilias=0, numeroDeFilhos=0, totalDeFilhos, mediaNumeroDeFilhos;
	float mediaSalarialDaPopulacao, salarioFamilia, salarioPopulacao, somaDosSalarios=0, maiorSalario=-1, menorSalario=-1;
	
	
	//menu de op��es
	
	while (1){
		
		printf("\nDigite '1' para adicionar uma nova fam�lia ou '2' para exibir tela de resultados: ");
		scanf("%d",&opcao);
		
	
		if(opcao==1){
			
			printf("\nInforme o sal�rio da fam�lia: ");
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
				
				printf("\nNenhuma fam�lia adicionada.");
				
			}else{
				
				mediaSalarialDaPopulacao = calcularMediaSalarialDaPopulacao(contadorFamilias,somaDosSalarios);
				mediaNumeroDeFilhos = calcularMediaDoNumeroDeFilhos(totalDeFilhos,contadorFamilias);
				
				printf("\n===EXIBINDO RESULTADOS===\n");
				printf("\nTotal de fam�lias que responderam a pesquisa: %d",contadorFamilias);
				printf("\nM�dia de sal�rio da popula��o: R$%.2f",mediaSalarialDaPopulacao);
				printf("\nM�dia de filhos por fam�lia: %d",mediaNumeroDeFilhos);
				printf("\nMenor sal�rio: R$%.2f",menorSalario);
				printf("\nMaior sal�rio: R$%.2f",maiorSalario);
				
			}
			
			break;
		
		}else{
			
			printf("\nOp��o inv�lida");
		}
	}

	
	return 0;


}



