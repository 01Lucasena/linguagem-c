#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularMedia(float primeiraNota, float segundaNota){
	
	float media = (primeiraNota + segundaNota) / 2;
	
	media = media >= 7 ? printf("M�dia: %.2f APROVADO!",media) : printf("M�dia: %.2f REPROVADO!",media);
	
	return media;
	
}

int main(){
	
	setlocale(LC_ALL,"");
	
	float primeiraNota, segundaNota;
	
	printf("Digite a 1� nota: ");
	scanf("%f",&primeiraNota);
	
	printf("Digite a 2� nota: ");
	scanf("%f",&segundaNota);
	
	calcularMedia(primeiraNota,segundaNota);
	
	return 0;
}
