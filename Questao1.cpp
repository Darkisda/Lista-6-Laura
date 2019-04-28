#include <stdio.h>
#include <stdlib.h>

int main(){
	int linhas, colunas, flag=1, cOntadorDeZeros=0;

	//FLAG=1 SIGNIFICA QUE O VALOR DA FLAG ESTARA FALSO,OU SEJA, NAO TERA CONTADO NEM UM ZERO ATE ENTAO, SE FLAG=0, SIGNIFICA QUER TERA CONTADO PELO MENOS 1 ZERO
	
	printf(">>Qual o tamanho da matriz em linhas por colunas?");
	scanf("%d %d", &linhas, &colunas);

	int matriz[linhas][colunas];
	
	for(int i = 0; i<linhas; i++){
		for(int j = 0; j<colunas; j++){
			printf("\n>>Digite os valores das linhas e colunas");
			scanf("%d", &matriz[i][j]);
			
			if(matriz[i][j]==0){
				flag=0;
			}
		}
		if(flag==0) cOntadorDeZeros++;
		
		flag=1;
	}
	
	printf("Linhas que nao possuem zeros: %d", linhas - cOntadorDeZeros);
	
	return 0;
}
