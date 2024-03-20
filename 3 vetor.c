#include <stdio.h>
#include <locale.h>



int main(){
	
	setlocale(LC_ALL,"");
	
	int vetor[4], i, soma=0;
	float media;

	for(i = 0; i < 4; i++){
		
		printf("\nDigite a %dª nota: ",i+1);
		scanf("%d",&vetor[i]);
		soma += vetor[i];
	}
	

	
	printf("\n===EXIBINDO RESULTADOS===\n");
	
	for(i = 0; i < 4; i++){
		
		printf("\n%dª Nota: %d",i + 1, vetor[i]);
	}
	
	
	media = soma / i;
	printf("\n\nMédia: %.2f",media);
	
	if(media >= 7){
		
		printf("\nAluno Aprovado.");
		
	}else if(media >= 5){
		
		printf("\nAluno em recuperação.");
		
	}else{
		
		printf("\nAluno reprovado.");
		
	}
	

	return 0;
}
