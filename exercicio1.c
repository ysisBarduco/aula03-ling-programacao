//1. Crie um programa que leia 4 numeros, armazene em um vetor e calcule a média
#include <stdio.h>

int main(){
	int numeros[4];
	int i;
	float media;
	
	//Ler 4 numeros
	printf("\nDigite 4 numeros: \n");
	for (i = 0; i < 4; i++) {
		printf("%d numero: ", i+1);
		scanf("%d", &numeros[i]);
	}

	//Somar os elementos
	media = 0;
	for (i = 0; i < 4; i++) {
		media += numeros[i];	
	}

	//Calcular a média
	media /= 4;
	
	//Mostrar a média
	printf("Media: %.2f\n", media);
	
	return 0;
}
