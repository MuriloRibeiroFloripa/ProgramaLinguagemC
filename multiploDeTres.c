#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	
	printf("Digite o numero: ");
	scanf("%d", &num);
	
	if ((num % 3) == 0)
	printf("E multiplo de 3");
	
	else
	printf("Nao e Multiplo de 3");
}
