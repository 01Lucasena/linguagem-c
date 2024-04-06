#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcularMedia(int n1,int n2){
	
	float media;
	media = (n1 + n2)/2;
	return media;
	
}

int main(){
	
	float primeiroNumero, segundoNumero, media;
	
	setlocale(LC_ALL,"");
	
	printf("Digite o primeiro número: ");
	scanf("%f",&primeiroNumero);
	
	printf("Digite o segundo número: ");
	scanf("%f",&segundoNumero);

	media = calcularMedia(primeiroNumero,segundoNumero);
	
	
	printf("\n Média: %.2f",media);
	
	return 0;

}
