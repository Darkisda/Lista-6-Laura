#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#include <time.h>

int main(){
	int matriz[TAM][TAM];
	int aux;
	int i, j;
	
	srand(time(NULL));
	
	for(i = 0; i<TAM; i++){
		for(j = 0; j<TAM; j++){
			matriz[i][j]=rand()%15+5;
		}
	}
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			printf(" %d", matriz[i][j]);
		}
		putchar('\n');
	}
	
	//A
	//TROCANDO A LINHA 0 COM A LINHA 2
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			aux = matriz[0][j];
			matriz[0][j] = matriz[2][j];
			matriz[2][j] = aux;
		}
	}
	
	//Mostrando a matriz do item A
	
	printf("\n\nA\n");
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			printf(" %d", matriz[i][j]);
		}
		putchar('\n');
	}
	
	//B
	//TROCANDO A COLUNA 2 COM A 4
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			aux = matriz[i][2];
			matriz[i][2] = matriz[i][4];
			matriz[i][4] = aux;
		}
	}
	
	//Mostrando a matriz do item B
	
	printf("\n\nB\n");
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			printf(" %d", matriz[i][j]);
		}
		putchar('\n');
	}

	//C
	//TROCANDO A LINHA 4 COM A LINHA 3
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			aux = matriz[4][j];
			matriz[4][j] = matriz[3][j];
			matriz[3][j] = aux;
		}
	}
	
	//Mostrando a matriz do item c
	
	printf("\n\nC\n");
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			printf(" %d", matriz[i][j]);
		}
		putchar('\n');
	}
	return 0;
}


