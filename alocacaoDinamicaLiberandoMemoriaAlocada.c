#include <stdio.h>
#include <stdlib.h>

void main(){
	int *p;
	p = (int*) malloc(10 * sizeof(int));
		if (p == NULL) {
		printf("Erro: Memoria insuficiente!\n");
	}
	else {
		int i;
 		//inserindo informacoes
		for (i=0; i<10; i++) {
			printf("Informe um valor: \n");
			scanf("%d", &p[i]);
		}
		//imprimindo informacoes
		for (i=0; i<10; i++) {
			printf("Valor: %d \n", p[i]);
		}
	}
	//liberando a memoria alocada para p
	free(p);
}
