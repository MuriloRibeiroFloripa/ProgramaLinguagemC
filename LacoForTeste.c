#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int contador, numero,conta;
	
	for (contador = 1; contador <= 5; contador = contador+1){
		   	printf("%d", numero);
		   	printf("Inicio do laco. Passo %d\n", contador);
		   	
		if ((contador % 2) == 0){
			printf("%d", numero);
			printf("Terminado antes do tempo....\n");
			
			continue;
		}
		
		printf ("Final do Laco. Passo %d\n", contador);
	}
  getch();
  system ("pause");
  return 0;
}
