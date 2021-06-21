#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
	int i, fat = 1;
	for (i=n; i>=1; i--) {
		fat *= i;
	}
	return fat;
}

int main(){
	int num, resul;
	
	printf("Informe um numero: \n");
	scanf("%d", &num);
	
	resul = fatorial(num);
	
	printf("Fatorial de %d e %d \n", num, resul);
	
	return 0;
}
