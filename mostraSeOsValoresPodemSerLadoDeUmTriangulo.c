#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>
main(){
	int A, B, C;
	
	printf("\n\t INFORME UM NUMERO : ");
	scanf("%d",&A);
	
	printf("\n\t INFORME UM SEGUNDO NUMERO : ");
	scanf("%d",&B);
	
	printf("\n\t INFORME UM TERCEIRO NUMERO : ");
	scanf("%d",&C);
	
	if(A<B+C != B<A+C != C<A+B)
	printf("\n\n ESTES NUMEROS SAO LADOS DE UM TRANGULO");
	else
	
	printf("\n\n ESTES NUMEROS NAO SAO LADOS DE UM TRIANGULO");
	printf("\n\n ");
	
	system("pause");
	return(0);
}
