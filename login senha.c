#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void cabecalho(){
	
	system("cls||clear");
	printf("\n===SENAI===\n");
	fflush(stdin);
	
}

int main(){
	
	char login[200], senha[200], loginCadastrado[200] = "lucas123", senhaCadastrada[] = "123@abc";
	
	//Solicitando dados ao usuário
	
	cabecalho();
	printf("Digite seu login: ");
	scanf("%s",&login);
	
	cabecalho();
	printf("Digite sua senha: ");
	scanf("%s",&senha);
	
	//Verificar se login e senha estão corretos
	
	cabecalho();
	
	if(strcmp(login, loginCadastrado) == 0 && strcmp(senha, senhaCadastrada) == 0){
		
		printf("\n Bem-Vindo!");
		
	}else{
		
		printf("\nAcesso Negado");
	}
	
	
	return 0;
	
}
