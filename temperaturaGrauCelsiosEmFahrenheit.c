#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

main(){
	int tgc;
	
	printf("\t Informe temperatura em graus Celsius: ");
	scanf("%d",&tgc);
	
	printf("\n\t %d graus Celsius corresponde a %3.2f graus Farenheit: \n\n", tgc, float(9*tgc+160)/5);
	
	system("PAUSE");
	return 0;
}
