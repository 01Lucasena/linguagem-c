#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin);
	
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	//Declarar variáveis
	
	char nome[200], conceito;
	float primeiraNota, segundaNota, media;
	
	//Solicitar dados ao usuário
	
	cabecalho();
	printf("Digite o seu nome: ");
	scanf("%s",&nome);
	
	cabecalho();
	printf("Digite a primeira nota: ");
	scanf("%f",&primeiraNota);
	
	cabecalho();
	printf("Digite a segunda nota: ");
	scanf("%f",&segundaNota);
	
	//Calcular média
	
	media=(primeiraNota+segundaNota)/2;
	
	//Verificar nota conceito
	
	if(media>=9){
		
		conceito='A';

	}else if(media>=7.5){
		
		conceito='B';
		
	}else if(media>=6){
		
		conceito='C';
	
	}else if(media>=4){
		
		conceito='D';
		
	}else if(media<4){
		
		conceito='E';
		
	}
	
	//Exibindo dados ao usuário
	
	cabecalho();
	printf("Nome: %s\n",nome);
	printf("Primeira nota: %.2f\n",primeiraNota);
	printf("Segunda nota: %.2f\n",segundaNota);
	printf("Média: %.2f\n",media);
	printf("Nota Conceito: %c\n",conceito);
	
	//Verificar e exibir situação do aluno
	
	switch(conceito){
		
		case 'A': 
		
		printf("Aluno Aprovado");
		break;
		
		case 'B': 
		
		printf("Aluno Aprovado");
		break;
		
		case 'C': 
		
		printf("Aluno Aprovado");
		break;
		
		case 'D':
			
		printf("Aluno Reprovado");
		break;
		
		case 'E':
			
		printf("Aluno Reprovado");
		break;
		
		
	}

	
	return 0;
	
}
