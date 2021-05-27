// PROGRAMA DESENVOLVIDO COMENTADO POR MURILO RIBEIRO DO 2� ANO SISTEMAS DE INFORMA��O UFMS
#include <stdlib.h>
#include <stdio.h>

/* Existem duas maneiras de declarar uma fun��o antes de ela ser usada:
a forma tradicional e o moderno modo de prot�tipos. a abordagem tradicional era 
o �nico metodo disponivel quando C foi inventada, mas agora esta obsoleto.
Os prot�ipos foram acrescentados pelo padr�o C ANSI. a abordagem tradicional �
permitida pelo padr�o ANSI para assegurar compatibilidade com c�digos mais antigos,
mas novos usos s�o desencorajados. O m�todo com prot�tipos � basicamente uma extens�o
do conceito tradicional. */

/* Prot�tipos permitem que C forne�a uma verifica��o mais forte de tipos. Quando
voce usa prot�tipos, C pode encontrar e apresentar quaiquer convers�es de tipos
ilegais entre o argumento usado para chamar uma fun��o e a defini��o de seus 
par�metros. C tamb�m encontra diferen�as entre o n�mero de argumentos usados para
chamar a fun��o e o n�mero de par�metros da fun��o. */

/* FORMA GERAL DE UMA DEFINI��O DE PROT�TIPOS DE FUN��O �
   
   tipo nome_func(tipo nome_par�m,tipo nome_par�m, tipo nome_par�, ... ,tipo nome_par�mN)
*/


int sqr_it(int *i);
 
int main()
{
    int x;
    printf("\n\tInforme valor ");
    scanf("%d",&x);
    sqr_it(&x); //passagem por refer�ncia
    printf("\n\t %d \n\n",x);
    system ("pause");
}

int sqr_it(int *i)
{
     *i*=*i;
     return *i;
}
 
