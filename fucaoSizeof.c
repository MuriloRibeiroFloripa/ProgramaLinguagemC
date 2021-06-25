#include <stdio.h>
#include <stdlib.h>

int main()
{
int vet[]={}, num, tamanho,tam;
char letra;
tamanho = sizeof(num);
tam = sizeof(&vet);

printf("Tamanho em bytes do inteiro: %d \n", tamanho);

tamanho = sizeof(letra);
printf("Tamanho em bytes do char: %d \n", tamanho);

printf("Tamanho em bytes do vetor inteiros de 1 posicao: %d \n", tam);

}
