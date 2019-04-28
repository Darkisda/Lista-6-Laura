#include <stdio.h>
#include <stdlib.h>
#define LINHAS 2
#define COLUNAS 5
int main(){
	int matriz[LINHAS][COLUNAS] = {0000000000};
	int aux;
	
	for(int i=0; i<LINHAS; i++){
		for(int j=0; j<COLUNAS; j++){
			printf("%d", matriz[i][j]);
//			scanf("%d", &matriz[i][j]);
		}
	}
	
/*	for(int i=0; i<LINHAS; i++){
		for(int j=0; j<COLUNAS; j++){
			printf(" %d", matriz[i][j]);
		}
		putchar('\n');
	}
		
/*	for(int i=0;i<LINHAS;i++){
		for(int j=0;j<LINHAS;j++){
			if(matriz[i][j]%=0){
				matriz[0][j];
			} else{
				matriz[1][j];
			}
		}
	}
/*	for(int i=0; i<LINHAS; i++){
		for(int j=0; i<COLUNAS; j++){
			printf(" %d", matriz[i][j]);
		}
		
		putchar('\n')
	}*/
	return 0;
}
