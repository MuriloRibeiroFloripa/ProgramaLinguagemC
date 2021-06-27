#include <stdio.h>
#include <stdlib.h>

int main(){
	float salario, percReajuste, vlrReajuste;
	
	printf("Digite o valor do salario do funcionario: ");
	scanf("%f", &salario);
	
	printf("Digite o percentual de reajuste: ");
	scanf("%f", &percReajuste);
	
	vlrReajuste = salario + (salario * (percReajuste / 100));
	printf("Produto com desconto: %f", vlrReajuste);
}
