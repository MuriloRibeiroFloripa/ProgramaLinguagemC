// PROGRAMA DESENVOLVIDO COMENTADO POR MURILO RIBEIRO DO 1º ANO SISTEMAS DE INFORMAÇÃO UFMS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>

// PASSAGEM DE MATRIZES, COMO ARGUMENTO PARA FUNÇÃO 

/* Por otro lado, um elemento de uma matriz pode ser usado como um argumento igual
a qualquer outra variavel simples. Por exemplo, o programa anterior poderia ser
escrito sem passar toda a matriz. */



void display(int num);

int main()
{
    int t[10],i;
    for (i=0;i<10;i++)
    t[i]=i;
    for (i=0;i<10;i++)display(t[i]);
    printf(" %d ",num);
    system("pause");
        
}

void display(int num)
{
     printf(" %d ",num);
     
}
