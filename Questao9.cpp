#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int main(){
	int matriz[TAM][TAM];
	
	srand(time(NULL));

//PREENCHENDO A MATRIZ
	
	for(int i=0; i<TAM; i++){
		for(int j=0; j<TAM; j++){
			matriz[i][j] = rand()%10+10;
		}
	}
	
	return 0;
}
