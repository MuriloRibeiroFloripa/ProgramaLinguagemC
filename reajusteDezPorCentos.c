#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
main(){
	float valor;
	
	printf("\n\tDigite um numero: ");
	scanf("%f", &valor);
	
	printf("\n\tValor reajustado em 10%% e: %2.2f\n", valor * 110 / 100);
	printf("\n\n");
	
	system("pause");
	return 0;
}
