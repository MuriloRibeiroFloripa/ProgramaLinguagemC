#include <stdio.h>
#include <stdlib.h>
int main(){
	float cotDolar, vlrDolar, conversao;
	
	printf("Digite o valor em dolar: ");
	scanf("%f", &vlrDolar);
	
	printf("Digite a cotacao do dolar: ");
	scanf("%f", &cotDolar);
	
	conversao = vlrDolar * cotDolar;
	
	printf("Conversao em reais: %.2f", conversao);
}
