#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* Escrever um programa que receba vários números inteiros no teclado e no final imprimir a
média dos números multiplos de 3. Para sair digitar 0(zero).
*/
main(){
	int num, soma = 0;
	float media = 0, cont = 0;
	
	printf("\n\tDigite: ZERO, para obter a Media dos valores Multiplos 3\n");
	printf("\n\t===========================================");
	
	printf("\n\t\t DIGITE UM NUMERO INTEIRO: ");	
	scanf("%d",&num);
		
	if(num %3 == 0 && num != 0)
	{
		soma = soma + num;
		cont++;
	}
	while(num!=0)
	{
		printf("\n\t\t DIGITE UM NUMERO INTEIRO: ");
		scanf("%d",&num);
		
		if(num %3==0 && num!=0)
		{
			soma = soma + num;
			cont++;
		}
	}
	media = soma / cont;
	printf("\n\t===========================================\n\n");
	printf("\n\t===========================================\n\n");	
	printf("\t\tA media dos numeros e: %3.2f ",media);	
	printf("\n\t===========================================\n");
	printf("\n\n");
	printf("\n");
	
	system("pause");
	return(0);
}
