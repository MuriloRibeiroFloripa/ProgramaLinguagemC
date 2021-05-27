// PROGRAMA DESENVOLVIDO COMENTADO POR MURILO RIBEIRO DO 2º ANO SISTEMAS DE INFORMAÇÃO UFMS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>

// PASSAGEM DE MATRIZES, COMO ARGUMENTO PARA FUNÇÃO 

/* Quando uma matriz é usada como um argumento para uma função, apenas o endereço da 
matriz é passado, não uma cópia dela inteiira. Quando voce chama uma função com um 
nome de matriz, um ponteiro para o primeiro elemento na matriz é passado para função.
(Um nome de matriz sem qualquer indice é um ponteiro para o primeiro elemento na matriz.
Isso signinifica que a declaração de parâmetros deve ser do tipo de ponteiro compativel.
*/



// existem três maneira de declarar um parâmetro que receberá um ponteiro para matriz.
void display1(int num[10]); // Imprime algum número, declarado como uma matriz [1º maneira].
void display2(int num[]); //Imprime algum número, declarado com matriz sem dimensão [2º maneira].
void display3(int *num);//Imrime algum número, Declaração com ponteiro [3º maneira]

int main()
{
    int t[10],i;
    for (i=0;i<10;i++)
    t[i]=i;
    
    display1(t);
    display2(t);
    display3(t);
    system("pause");
        
}

void display1(int num[10])
{
     int i;
     printf("\n\tDeclarando a Matriz com sua dimensao\n");
     for(i=0;i<10;i++)
     printf(" t[%i]=%d",i,num[i]);
     printf("\n\n");
}/* o compilador converte automaticamente para um ponteiro de inteiros. Isso é necessàrio
porque nenhum parametro pode realmente receber uma matriz inteira. Assim como apenas
um ponteiro para matriz é passado, um parâmetro de ponteiro deve estar lá para recebe-lo.*/
    
void display2(int num[])
{
     int i;
     printf("\n\tDeclarado a Matriz sem dimensao\n");
     for(i=0;i<10;i++)
     printf(" t[%i]=%d",i,num[i]);
     printf("\n\n");
}/*Neste caso, num é declarado como uma matriz de inteiros de tamanho desconhecido. 
Como C não fornece nenhuma verificação de limites em matriz, o tamanho real da matriz
é irrelevante para o parâmetro (mas não para o programa, é claro). Esse metódo de
declaração realmente define NUM como um ponteiro de inteiros*/
     
void display3(int *num)
{
     int i;
     printf("\n\tDeclaração a Matriz com ponteiro\n");
     for(i=0;i<10;i++)
     printf(" t[%i]=%d",i,num[i]);
     printf("\n\n");
}
     
     
