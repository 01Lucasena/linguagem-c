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
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f",&primeiroNumero);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f",&segundoNumero);

	media = calcularMedia(primeiroNumero,segundoNumero);
	
	
	printf("\n M�dia: %.2f",media);
	
	return 0;

}
