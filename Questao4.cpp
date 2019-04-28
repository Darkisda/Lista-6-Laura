#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main(){
	int matriz[TAM][TAM];
	int valor, contador=0,i,j, flag=0;
	
	for( i = 0; i<TAM; i++){
		for(j = 0; j<TAM; j++){
			contador++;
			matriz[i][j]=contador;
		}
	}
		
	printf("\n\nDigite um valor que voce acha que esta na matriz: ");
	scanf("%d", &valor);
	
	for( i=0; i<TAM; i++){
		for( j=0; j<TAM; j++){
			if(matriz[i][j]==valor){
				printf("\n\nEsta localizado na Matriz [%d] [%d] = %d\n\n", i, j, valor);
				flag=1;
				break;
			}
		if(flag==1) break;
		
		if((valor!=matriz[i][j])&&(contador==matriz[i][j])){
			printf("\n\nValor nao encontado\n\n");
			flag=0;
			break;
			}
		}
	}
	
	for( i=0; i<TAM; i++){
		for( j=0; j<TAM; j++){
			printf(" %d", matriz[i][j]);
		}
		
		putchar('\n');
	}
	
	return 0;
}
