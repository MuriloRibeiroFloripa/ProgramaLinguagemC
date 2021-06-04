#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
main(){
	int x, max = 0, p = 1;
	printf("\n\t INFORME UM NUMERO : ");
	scanf("%d",&max);
	
	for(x = 1; x <= max; x++){
		printf("\n\t Numero gerados: %d ",x);
		p = p * x;
	}
	
	printf("\n\n\t O produto dos numeros gerados e: %d",p);
	printf("\n\n");
	
	system("pause");
	return(0);
}
