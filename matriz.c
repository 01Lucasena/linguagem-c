#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int numeros[2][2] = {{1,2},{3,4}};
	
	numeros[0][0] = 1;
	numeros[0][1] = 2;
	numeros[1][0] = 3;
	numeros[1][1] = 4;
	
	
	printf("\nElemento 1: %d",numeros[0][0]);
	printf("\nElemento 2: %d",numeros[0][1]);
	printf("\nElemento 3: %d",numeros[1][0]);
	printf("\nElemento 4: %d",numeros[1][1]);
	
	return 0;
}
