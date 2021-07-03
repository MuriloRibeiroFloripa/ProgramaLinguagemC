#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, fib=1, fib2=1, aux;
	
	printf("%d \n", fib);
	printf("%d \n", fib2);
	
	for (i=2; i<20; i++) {
		aux = fib2;
		fib2 = fib + fib2;
		
		printf("%d \n", fib2);
		fib = aux;
	}
}
