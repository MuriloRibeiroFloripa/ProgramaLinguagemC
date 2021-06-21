#include <stdio.h>
#include <stdlib.h>
	
int multiplica(int multiplicando, int multiplicador) {
	int i, resultado = 0;
	for (i=1; i<=multiplicador; i++) {
		resultado += multiplicando;
	}
	return resultado;
}
int main(){
	int multiplicando, multiplicador, resultado;
	
	printf("Informe o multiplicando: \n");
	scanf("%d", &multiplicando);
	
	printf("Informe o multiplicador: \n");
	scanf("%d", &multiplicador);
	
	resultado = multiplica(multiplicando, multiplicador);
	printf("Resultado: %d \n", resultado);
	return 0;
}
