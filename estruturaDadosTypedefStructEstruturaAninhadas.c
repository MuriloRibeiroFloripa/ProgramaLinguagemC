#include <stdio.h>
#include <stdlib.h>

typedef struct departamento {
	int cod;
	char descricao[30];
} Departamento;

typedef struct cargo {
	int cod;
	char descricao[30];
} Cargo;

typedef struct funcionario {
	int cod;
	char nome[30];
	float salario;
	Departamento depto;
	Cargo cargo;
} Funcionario;

int main(){
	Funcionario func[5];
	int i;
	
	for (i=0; i<5; i++) {
		printf("Informe o codigo: \n");
		scanf("%d", &func[i].cod);
		
		printf("Informe o nome: \n");
		scanf("%s", &func[i].nome);
	}
	printf("\n_________________________________\n");
	for (i=0; i<5; i++) {
		printf("Codigo: %d \n", func[i].cod);
		printf("Nome: %s \n", func[i].nome);
	}
	printf("_________________________________\n");
}
