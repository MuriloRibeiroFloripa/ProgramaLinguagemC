// PROGRAMA DESENVOLVIDO COMENTADO POR MURILO RIBEIRO DO 2º ANO SISTEMAS DE INFORMAÇÃO UFMS
#include <stdlib.h>
#include <stdio.h>

/* Existem duas maneiras de declarar uma função antes de ela ser usada:
a forma tradicional e o moderno modo de protótipos. a abordagem tradicional era 
o único metodo disponivel quando C foi inventada, mas agora esta obsoleto.
Os protóipos foram acrescentados pelo padrão C ANSI. a abordagem tradicional é
permitida pelo padrão ANSI para assegurar compatibilidade com códigos mais antigos,
mas novos usos são desencorajados. O método com protótipos é basicamente uma extensão
do conceito tradicional. */

/* Protótipos permitem que C forneça uma verificação mais forte de tipos. Quando
voce usa protótipos, C pode encontrar e apresentar quaiquer conversões de tipos
ilegais entre o argumento usado para chamar uma função e a definição de seus 
parâmetros. C também encontra diferenças entre o número de argumentos usados para
chamar a função e o número de parâmetros da função. */

/* FORMA GERAL DE UMA DEFINIÇÃO DE PROTÓTIPOS DE FUNÇÃO É
   
   tipo nome_func(tipo nome_parâm,tipo nome_parâm, tipo nome_parâ, ... ,tipo nome_parâmN)
*/


int sqr_it(int *i);
 
int main()
{
    int x;
    printf("\n\tInforme valor ");
    scanf("%d",&x);
    sqr_it(&x); //passagem por referência
    printf("\n\t %d \n\n",x);
    system ("pause");
}

int sqr_it(int *i)
{
     *i*=*i;
     return *i;
}
 
