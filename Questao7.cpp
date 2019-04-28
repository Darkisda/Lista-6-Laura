#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main(){
	int matriz [TAM][TAM];
	int vetor [TAM];
	int i, j, aux;

//PREENCHENDO A MATRIZ
	
	for(i = 0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			printf(">>");
			scanf("%d", &matriz[i][j]);
		}
	}
	
//MOSTRANDO A MATRIZ
	
	printf("\n\n\n");
	
	for(i =0; i<TAM; i++){
		for(j = 0; j<TAM; j++){
			printf(" %d", matriz[i][j]);
		}
		
		putchar('\n');
	}
	
	system("pause");
	
//VETOR RECEBE A SOMA DAS COLUNAS DA MATRIZ
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			aux = matriz[i][j];
			if(i!=0){
				vetor[j] = matriz[i][j] + aux;
				aux = matriz[i][j];
			}
		}
	}
	
//MOSTRANDO VETOR
	
	printf("\n\n");
	
	for(j=0; j<TAM; j++){
		printf(" %d", vetor[j]);
	}
	return 0;
}
