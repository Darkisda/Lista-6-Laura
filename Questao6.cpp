#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#include <time.h>
#include <math.h>

int main(){
	int matriz[TAM][TAM];
	
	srand(time(NULL));

//PREENCHENDO A MATRIZ
	
	for(int i=0; i<TAM; i++){
		for(int j=0; j<TAM; j++){
			matriz[i][j]=rand()%8+1;
		}
	}

//MOSTRANDO A MATRIZ PREENCHIDA
	
	for(int i=0; i<TAM; i++){
		for(int j=0; j<TAM; j++){
			printf(" %d", matriz[i][j]);
		}
		
		putchar('\n');
	}

//SE MATRIZ[i][j] | i<j = 2i + 7j - 2
//SE MATRIZ[i][j] | i=j = 3i² -1 
//SE MATRIZ[i][j] | i>j	= 4i³ + 5j² +1

	for(int i=0; i<TAM; i++){
		for(int j=0; j<TAM; j++){
			if(i<j){
				matriz[i][j]=(2*i) +(7*j) -2;
			} else if(i==j){
				matriz[i][j]=(3*(pow(i,2))) - 1;
			} else if(i>j){
				matriz [i][j]=(4*(pow(i,3))) + (5*(pow(j,2))) +1;
			}
		}
	}
	
//MOSTRANDO A MATRIZ TODA DOIDA(PORQUE EU NAO ENTENDI PRAQUE FAZER ISSO -.-")
// OLHA O TAMANHO DESSA FUCK MATRIZ 10X10!!! AINDA BEM QUE EXISTE SRAND TY GOD
	
	printf("\n\n\n\n");	

	for(int i=0; i<TAM; i++){
		for(int j=0; j<TAM; j++){
			printf(" %d", matriz[i][j]);
		}
		
		putchar('\n');
	}
	return 0;
}
