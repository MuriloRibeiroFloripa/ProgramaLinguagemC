#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int num, soma = 0;
	float media = 0, cont = 0;

	printf("Digite zero para sair\n");
	printf("\n DIGITE UM NUMERO INTEIRO: ");
	scanf("%d",&num);
	
	if(num %3 == 0 && num != 0){
		soma = soma + num;
		cont++;
	}
	while(num != 0){
		printf("\n DIGITE UM NUMERO INTEIRO: ");
		scanf("%d",&num);
		
		if(num %3==0 && num!=0){
			soma = soma + num;
			cont++;
		}
	}
	
	media = soma / cont;
	printf("\n\n A media dos numeros e: %3.2f ",media);
	printf("\n\n");
	
	system("pause");
	return(0);
}
