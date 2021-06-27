#include <stdio.h>
#include <stdlib.h>

int main(){
	float vlrProd, percDesc, vlrDesc;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &vlrProd);
	
	printf("Digite o desconto: ");
	scanf("%f", &percDesc);
	
	vlrDesc = vlrProd - (vlrProd * (percDesc / 100));
	printf("Produto com desconto: %f", vlrDesc);
}

