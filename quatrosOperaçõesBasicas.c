#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, resultado;
	
	printf("Digite o numero 1: ");
	scanf("%f", &n1);
	
	printf("Digite o numero 2: ");
	scanf("%f", &n2);

	ptintf("\n===== Resultado das 4 operações Básicas ======")	
	resultado = n1 + n2;	
	printf("\nSoma: %f", resultado);
	
	resultado = n1 - n2;
	printf("\nSubtracao: %f", resultado);
	
	resultado = n1 * n2;	
	printf("\nMultiplicacao: %f", resultado);
	
	resultado = n1 / n2;
	printf("\nDivisao: %f", resultado);
}
