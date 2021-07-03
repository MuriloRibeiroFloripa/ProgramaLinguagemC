#include <stdio.h>
#include <stdlib.h>
int main(){
	char nome[100];
	int p1, p2, i;
	float media=0, mediafinal=0;
	
	for (i=1; i<=5; i++) {
		printf("Digite o nome: ");
		fflush(stdin);
		fgets(nome, 100, stdin);
		
		printf("Digite a nota da prova 1: ");
		scanf("%d", &p1);
		
		printf("Digite a nota da prova 2: ");
		scanf("%d", &p2)
		
		printf("Nome: %s", nome);
		printf("Notas - P1: %d \t P2: %d \n", p1, p2);
		
		media = (p1 + p2) / 2;
		printf("Media de notas: %.2f \n", media);
		
		mediafinal += media;
	}
	
	mediafinal = mediafinal / (i-1);
	
	printf("Media de notas dos alunos: %f \n", mediafinal);
}
