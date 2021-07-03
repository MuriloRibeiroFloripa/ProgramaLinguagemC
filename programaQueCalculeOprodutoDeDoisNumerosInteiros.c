#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, multiplicando, multiplicador, soma=0;
	
	printf("Digite o multiplicando: ");
	scanf("%d", &multiplicando);
	
	printf("Digite o multiplicando: ");
	scanf("%d", &multiplicador);
	
	if (multiplicando < 0)
		printf("Numero de multiplicando invalido \n");
		
		else if (multiplicador < 0)
		printf("Numero de multiplicador invalido \n");
		
		else if (multiplicando > multiplicador)
			printf("Multiplicando deve ser menor que multiplicador \n");
			
			else {
				for (i=1; i <= multiplicador; i++) {
					soma += multiplicando;
				}
				
				printf("Resultado: %d \n", soma);
			}
}
	
