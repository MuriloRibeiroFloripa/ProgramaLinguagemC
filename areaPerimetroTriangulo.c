#include <stdio.h>
#include <stdlib.h>

int main(){
	float base, altura, perimetro, area;
	
	printf("Digite a base: ");
	scanf("%f", &base);
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	perimetro = base + altura;
	area = base * altura;
	
	printf("Perimetro: %f \n", perimetro);
	printf("Area: %f \n", area);
}
