#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p;
	p = (int*) calloc(10, sizeof(int));
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
}
