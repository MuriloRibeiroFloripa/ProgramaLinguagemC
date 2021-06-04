#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
main(){
	int num1, num2;
	
	printf("\n\n Digite um numero: ");
	scanf("%d",&num1);
	
	printf("\n\n Digite um numero: ");
	scanf("%d",&num2);
	
	if(num1<num2)
	printf("\n\tOs numeros digitados na ordem crescente e: %d e %d\t",num1, num2);
	else
	printf("\n\tOs numeros digitados na ordem crescente e: %d e %d\t",num2, num1);
	
	printf("\n\n");
	system("pause");
	return 0;
}
