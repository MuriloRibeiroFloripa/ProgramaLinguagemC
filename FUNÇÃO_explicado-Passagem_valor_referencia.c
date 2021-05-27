// PROGRAMA DESENVOLVIDO COMENTADO POR MURILO RIBEIRO DO 2� ANO SISTEMAS DE INFORMA��O UFMS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>


// FORMA GERAL DE UMA FUN��O:


//    especificador_de_tipo nome_da_fun��o(lista de par�metros)
//    {
//    Corpo da fun��o
//    }

// Espicificador_de_tipo especifica o tipo de valor que o comando return da fun��o devolve.

// Se nenhum tipo � especificado, o compilador assume que a fun��o devolve um resultado inteiro.

/* A lista de parametros � uma lista de nomes de variaveis separados por virgulas 
e seus tipos associados que recebem o valores dos argumentos quando a fun��o � chamada.*/
/* Uma fun��o pode n�o ter parametros, neste caso a lista de parametros � vazia.
no entanto, mesmo que n�o exista par�metros, os parenteses ainda s�o necess�rios.*/
/* Voce pode declarar muitas variaveis como sendo um tipo comum, tendo tipo e o
nome da vari�vel de forma geral fica assim:*/
// f(tipo nomeVAR1, tipo nomeVAR2,...tipo nomeN)

// REGRA DE ESCOPO DE FUN��ES:

/* Um c�digo de uma fun��o � privativo aquela fun��o e n�o pode ser acessado por 
nenhum comando em outra fun��o, exceto por meio de uma chamada � fun��o.*/
/* O codigo e os dados que s�o definidos internamente a uma fun��o n�o podem 
interagir com o c�digo ou dados definidos em outra fun��o porque as duas fun��es
tem escopos diferentes.*/
/* Variaveis que s�o definidas internamente a uma fun��o s�o chamadas variaveis 
locais. Uma vari�vel local vem a existir quando ocorre a entrada da fun��o e ela
� destruida ao sair.*/
/* A �nica exce��o ocorre quando a vari�vel � declarada com especificador de 
tipo de armazenamento STATIC. O compilador trata como se ela fosse uma vari�vel 
global para fins de armazenamento, mas ainda limita seu escopo para dentro da fun��o.*/
/* Em C, todas as fun��es est�o no mesmo n�vel de escopo. Isto �, n�o � poss�vel
deinir uma fun��o internamente a uma fun��o. Esta � a raz�o de C n�o ser 
tecnicamente uma linguagem estruturada em blocos.*/

// ARGUMETOS DE FUN��ES:

/* Se uma fun��o usa argumetos, ela deve declarar vari�veis que aceitem os valores
dos argumentos, ela deve declarar vari�veis que aceitem os valores dos arguemtos.*/
// Essas vari�veis s�o chamadas de PARAMETROS FORMAIS da fun��o.
/* Elas se comportam como quaiquer outras vari�veis locais dentro da fun��o e s�o
criadas na entrada e destruidas na sa�da.*/
// Como mostra a fun��o seguinte, a declara��o de par�metros ocorre ap�s o nome da fun��o.

/* devolve 1 se c � parte da string s; 0 caso contr�rio.*/

int is_in(char *s, char c)
{
           while (*s)
           if(*s==c)
           {
                    return 1;
                    
           }
           else s++;
           {
                return 0;
           }
}
/* Voce deve assegurar-se de que os argumetos usados para chamar a fun��o seja
compat�veis, o Compilador n�o gera uma mensagem de erro, mas ocorre erros inesperados.*/

// CHAMADA POR VALOR

/* Esse m�todo copia o valor de um argumento no parametro formal da sub-rotina.
Assim, autera��es feitas no Par�metro da sub-rotina n�o tem nenhum efeito nas
variaveis usadas para chamar a rotina
ex: na fun��o sqr(int x)*/

int sqr(int x) // fun��o passagem por valor
{
    x=x*x;
    return (x);     
}
// Apenas a variavel x � modificada, a valor apresentado pelo usuario continua o mesmo valor.
// O que ocorre dentro da fun��o n�o tem efeito algum sobre a vari�vel usada na chamada.

void swap(int *x, int *y) //fun��o passagem por refer�ncia
{
     int temp;
     temp=*x; // a variavel temp est� recebendo valor de x;
     *x=*y; //p�e y em x;
     *y=temp; // p�e x em y;
     
}
/* swap() � capaz de  trocar os valores das duas vari�veis apontadas por x e y porque
s�o passados seus endere�os (e n�o seus valores). Da� que, dentro da fun��o, o conte�do
das vari�veis pode ser acessado usando as opera��es padr�o de ponteiro. Portanto
o conte�do das variaveis usadas para chamar a fun��o � trocado.*/



int sqr (int x); //fun��o passagem por valor
void swap(int *x, int *y); // fun��o passagem por refer�ncia

int main()
{
    int t;
    printf("\n----------------chamada por valor---------------------\n");
    printf("\n\tInforme o valor para Multiplicar ");
    scanf("%d",&t);
    printf("\n\t%d X %d = %d Modelo: Funcao passagem por Valor \n\n\n",t,t,sqr(t));
    printf("---------------------------------------------------fim\n");
    system("pause");
    system("cls");
    printf("\n--------------chamada por referencia-------------------\n");
    int i,j;
    printf("\n\tInforme i ");
    scanf("%d",&i);
    printf("\n\tInforme j ");
    scanf("%d",&j);
    
    printf("\n\t i=%d  j=%d Antes de Trocar os valores e de chamar a funcao\n\n",i,j);
    swap(&i,&j); //passa os endere�os por chamada por refer�ncia de i e j.
    
    printf("\n\t i=%d  j=%d depois da chamada da funcao por referencia \n\t altera os valor das variavei locais\n\n\n",i,j);
    printf("---------------------------------------------------fim\n");
    system("pause");
    return 0;
}
// CHAMADA POR REFER�NCIA

/* Nesse m�todo, o endere�o de um argumento � copiado no par�metro. Dentro da sub-rotina,
o endere�o � usado para acessar o argumento real utilizado na chamada. Isso sigifica que
altera��es feita no par�mentro afetam a vari�vel usada para chamar a rotina.*/
/* Voce pode criar uma chamada chamada por reerencia passando um ponteiro para o argumento.
Ponteiros s�o passados para a fun��o como qualquer outra vari�vel. exemplo fun��o swap()*/



