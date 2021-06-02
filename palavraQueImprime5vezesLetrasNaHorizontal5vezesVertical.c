#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

main(){
	int x, y, tam;
	char nome[30];
	
	printf("Digite uma palavra: ");
	scanf("%s",&nome);
	
	printf("\n\n");
	tam = 5;	
	
	// o limite superior da repetição é o valor de x do primeiro for
	// y <= x
	for (x = 1; x <= tam; x++){
		for (y = 1; y <= x; y++)
			printf("%s\t",nome);
			printf("\n");
	}
	printf("\n\n\n");
	system("pause");
	return 0;
}
