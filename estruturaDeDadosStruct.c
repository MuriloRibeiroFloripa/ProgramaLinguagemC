#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario {
int cod;
char nome[30];
float salario;
int depto;
int cargo;
};

int main(){
	struct funcionario func1, func2;
	
	//atribuindo dados a func1
	func1.cod = 1;
	strcpy(func1.nome, "Joao");
	func1.salario = 1200;
	
	//imprimindo os dados de func1
	printf("Codigo: %d \n", func1.cod);
	printf("Nome: %s \n", func1.nome);
	printf("Salario: %f \n", func1.salario);
	
	//atribuindo valores a func2 com o uso do scanf
	printf("Informe o codigo: \n");
	scanf("%d", &func2.cod);
	
	printf("Informe o nome: \n");
	scanf("%s", &func2.nome);
	
	printf("Informe o salario: \n");
	scanf("%f", &func2.salario);
	
	//imprimindo os dados de func2
	printf("Codigo: %d \n", func2.cod);
	printf("Nome: %s \n", func2.nome);
	printf("Salario: %f \n", func2.salario);
}
