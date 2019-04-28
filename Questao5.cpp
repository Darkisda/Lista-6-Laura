#include <stdio.h>
#include <stdlib.h>
#define TAM 8
#include <time.h>
int main(){
	int matriz[TAM][TAM];
	
	srand(time(NULL));
	
//PREENCHENDO A MATRIZ

	for(int i =1; i<TAM; i++){
		for(int j=1; j<TAM; j++){
			matriz[i][j] = 0;
		}
	}

//MOSTRANDO A MATRIZ PREENCHIDA
	
	for(int i =1; i<TAM; i++){
		for(int j =1; j<TAM; j++){
			printf(" %d", matriz[i][j]);
		}
		
		putchar('\n');
	}
	
	printf("\n\n\n");		

//APLICANDO A TRIANGULAR INFERIOR SO COM 0´s

	for(int i=1;i<TAM;i++){
		for(int j=1; j<i ; j++){
			matriz[i][j] = rand()%8+1;
		}
	}

//MOSTRAND A MATRIZ TRIANGULAR INFERIOR
 	
	for(int i =1; i<TAM; i++){
		for(int j =1; j<TAM; j++){
			printf(" %d", matriz[i][j]);
		}
		
		putchar('\n');
	}	
	return 0;
}
