#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<math.h>
main(){
	
	int qt=0;
	
	printf("\n\tInforme a Quantidade de Alunos: ");
	scanf("%d",&qt);
	
	float n1[qt], n2[qt], media[qt];
	char nome[qt][30],nome1[qt][30], situacao[qt][50];
	int x, y=1;

	
	for(x = 0; x < qt; x++){
		
		printf("\n\tInforme nome %d: ", x + 1);
		scanf("%f", &n1[x]);
		gets(nome[x]);
		
		printf("\tInforme nota %d do aluno %s: ", y ,nome[x]);
		scanf("%f", &n1[x]);		
		gets(nome1[x]);
		
		y++;
		
		printf("\tInforme nota %d do aluno %s: ", y, nome[x]);
		scanf("%f", &n2[x]);
		gets(nome1[x]);
		
		y = 1;
	}
	
	for(x = 0; x < qt; x++)
	{
		media[x] = (n1[x] + n2[x]) / 2;
		if(media[x] >= 5)
			strcpy(situacao[x],"Aprovado Parabens!");
			
			else
			strcpy(situacao[x],"Reprovado! - Vai estudar chimpanze");
	}
	
	printf("\t____________________________________________________________________________");
	printf("\n\n\t Nome\tNota1\t\tNota2\tMedia\tSituacao");
	printf("\n\t__________________________________________________________________________");
	
	for(x = 0; x < qt; x++){
		printf("\n\n\t %s\t%3.2f\t\t%3.2f\t%3.2f\t%s",nome[x],n1[x],n2[x],media[x],situacao[x]);
	}
	
	printf("\n\t__________________________________________________________________________");
	printf("\n\t Para ser APROVADO deve ter nota minima de 5 pontos:\n");
	printf("\n\n");
	
	system("pause");
	return(0);
}
