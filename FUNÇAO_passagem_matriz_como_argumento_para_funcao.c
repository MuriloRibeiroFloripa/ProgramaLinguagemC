// PROGRAMA DESENVOLVIDO COMENTADO POR MURILO RIBEIRO DO 2� ANO SISTEMAS DE INFORMA��O UFMS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>

// PASSAGEM DE MATRIZES, COMO ARGUMENTO PARA FUN��O 

/* Quando uma matriz � usada como um argumento para uma fun��o, apenas o endere�o da 
matriz � passado, n�o uma c�pia dela inteiira. Quando voce chama uma fun��o com um 
nome de matriz, um ponteiro para o primeiro elemento na matriz � passado para fun��o.
(Um nome de matriz sem qualquer indice � um ponteiro para o primeiro elemento na matriz.
Isso signinifica que a declara��o de par�metros deve ser do tipo de ponteiro compativel.
*/



// existem tr�s maneira de declarar um par�metro que receber� um ponteiro para matriz.
void display1(int num[10]); // Imprime algum n�mero, declarado como uma matriz [1� maneira].
void display2(int num[]); //Imprime algum n�mero, declarado com matriz sem dimens�o [2� maneira].
void display3(int *num);//Imrime algum n�mero, Declara��o com ponteiro [3� maneira]

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
}/* o compilador converte automaticamente para um ponteiro de inteiros. Isso � necess�rio
porque nenhum parametro pode realmente receber uma matriz inteira. Assim como apenas
um ponteiro para matriz � passado, um par�metro de ponteiro deve estar l� para recebe-lo.*/
    
void display2(int num[])
{
     int i;
     printf("\n\tDeclarado a Matriz sem dimensao\n");
     for(i=0;i<10;i++)
     printf(" t[%i]=%d",i,num[i]);
     printf("\n\n");
}/*Neste caso, num � declarado como uma matriz de inteiros de tamanho desconhecido. 
Como C n�o fornece nenhuma verifica��o de limites em matriz, o tamanho real da matriz
� irrelevante para o par�metro (mas n�o para o programa, � claro). Esse met�do de
declara��o realmente define NUM como um ponteiro de inteiros*/
     
void display3(int *num)
{
     int i;
     printf("\n\tDeclara��o a Matriz com ponteiro\n");
     for(i=0;i<10;i++)
     printf(" t[%i]=%d",i,num[i]);
     printf("\n\n");
}
     
     
