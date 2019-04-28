#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAM 5

int main(){
	int matrizA[TAM][TAM];
	int matrizB[TAM][TAM];
	
	srand(time(NULL));

//PREENCHENDO A MATRIZ
	
	for(int i=0; i<TAM; i++){
		for(int j=0; j<TAM; j++){
			matrizA[i][j] = rand()%10+20;
		}
	}
	
//MOSTRANDO A MATRIZ A
	
	printf("\n\nMatriz A\n");
	
	for(int i=0; i<TAM; i++){
		for(int j=0; j<TAM; j++){
			printf(" %d", matrizA[i][j]);
		}
		
		putchar('\n');
	}

//PREENCHENDO A MATRIZ B
	
	for(int i=0; i<TAM; i++){
		for(int j=0; j<TAM; j++){
			matrizB[i][j] = pow(matrizA[i][j],2);
		}
	}

//MOSTRANDO A MATRIZ B

	printf("\n\nMatriz B\n");
	
	for(int i=0; i<TAM; i++){
		for(int j=0; j<TAM; j++){
			printf(" %d", matrizB[i][j]);
		}
		
		putchar('\n');
	}
	return 0;
}
