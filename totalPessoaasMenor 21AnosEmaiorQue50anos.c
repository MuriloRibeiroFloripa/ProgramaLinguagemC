#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	
	int idade, contador21 = 0, contador50 = 0;
	
	printf("\n DIGITE A IDADE: ");
	scanf("%d", &idade);
	
	while(idade != -1){
		
		if(idade < 21)
		contador21++;
		
		if(idade > 50)
		contador50++;
		
		printf("\n DIGITE A IDADE(PARA ENCERRAR DIGITE -1) : ");
		scanf("%d",&idade);
	}
	
	printf("\n %d PESSOAS COM MENOS DE 21 ANOS.",contador21);
	printf("\n %d PESSOAS COM MAIS DE 50 ANOS.",contador50);
	printf("\n\n");
	
	system("pause");
	return(0);
}
