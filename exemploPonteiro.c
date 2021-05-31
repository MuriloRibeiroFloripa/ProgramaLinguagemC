#include <stdio.h>
#include <conio.h>

int main(void){
	//valor é a variável que
	//será apontada pelo ponteiro
	
	int valor ;
	
	//declaração de variável ponteiro
	int *ptr;
  
  	//atribuindo o endereço da variável valor ao ponteiro
  	ptr = &valor;
  
  	printf("Informe o valor");
  	scanf("%d",&valor);
  
  	printf("Utilizando ponteiros\n\n");
  	printf ("Conteudo da variavel valor: %d\n", valor);
  	printf ("Endereco da variavel valor: %x \n", &valor);
  	printf ("Conteudo da variavel ponteiro ptr: %x", ptr);
  
  	getch();
  	return(0);
}
