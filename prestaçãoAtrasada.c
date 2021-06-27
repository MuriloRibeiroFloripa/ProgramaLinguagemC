#include <stdio.h>
#include <stdlib.h>

int main(){
	int periodoAtraso;
	float valorVencido, taxaJuros, juros, novoValor;
	
	printf("Digite o valor da prestacao vencida: ");
	scanf("%f", &valorVencido);
	
	printf("Taxa de juros: ");
	scanf("%f", &taxaJuros);
	
	printf("Periodo de atraso: ");
	scanf("%d", &periodoAtraso);
	
	juros = ((valorVencido * (taxaJuros / 100)) * periodoAtraso);
	novoValor = valorVencido + juros;
	
	printf("Valor prestacao: %f \n", valorVencido);
	printf("Periodo de atraso: %d \n", periodoAtraso);
	printf("Juros a ser cobrados: %f \n", juros);
	printf("Valor da prestacao com juros: %.2f", novoValor);
}
