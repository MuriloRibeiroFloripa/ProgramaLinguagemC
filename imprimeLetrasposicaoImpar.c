#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
main(){
	 int pp=1,tam,x;
	 char APELIDO[100];
	 
	 printf ("Informe um apelido:");
	 gets(APELIDO);
	 
	 tam=strlen(APELIDO);
	 printf("\nAs letras na posicao impar sao: ",x);
	 
	 while(pp<=tam-1){
	 	printf(" %c ",APELIDO[pp]);
	 	pp=pp+2;
		}
		
		printf ("\n");
		printf("\n\tNome digitado: %s\t",APELIDO);
		
		printf ("\n\n");
		system("PAUSE");
		return 0;
} 

