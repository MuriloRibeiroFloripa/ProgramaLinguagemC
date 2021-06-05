#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int x, vet[6], num, encontrado;
	
	for(int x = 0; x < 6; x++){
		printf("\n\t[%d] Digite um numero: ",x);
		scanf("%d",&vet[x]);
	}
	
	printf("\n\n");
	printf("\n\tDigite um valor a ser pesquisado: ");
	scanf("%d",&num);
	
	for(int x = 0; x < 6; x++)
	if(vet[x] == num)
	{
		printf("\n\n\n\t  O numero %d esta na posicao %d: ",num,x);
		printf("\n\t  O numero %d foi o numero %d a ser digitado: ",num,(x+1));
		encontrado = 1;
	}
	
	if(encontrado != 1)
	printf("\n\n\t Este numero nao existe! \n");
	printf("\n\n\n\n");
	
	system("pause");
	return(0);
}
