#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, m, n;
	int **matriz;
	
	printf("Informe o numero de linhas: \n");
	scanf("%d", &m);
	
	printf("Informe o numero de colunas: \n");
	scanf("%d", &n);
	
	//primeiro malloc aloca as linhas
	matriz = (int **)malloc(m * sizeof(int*));
	for(i = 0; i < m; i++){
		//segundo malloc aloca as colunas
		matriz[i] = (int*) malloc(n * sizeof(int));
		
		//acessando a matriz
		for(j = 0; j < n; j++){
			printf("Informe um valor: \n");
			scanf("%d", &matriz[i][j]);
		}
	}
}
