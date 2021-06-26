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
	for (i=0; i<10; i++) {
		printf("Informe um valor: \n");
		scanf("%d", &p[i]);
	}
}
//aumentando o tamanho da memoria
p = realloc(p, 20 * sizeof(int));

if (p == NULL) {
	printf("Erro: Memoria insuficiente!\n");
}

else {
	int i;
	for (i=0; i<20; i++) {
		printf("Valor na posicao %d: %d\n", i, p[i]);
		}
	}
}
