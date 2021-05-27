// PROGRAMA DESENVOLVIDO COMENTADO POR MURILO RIBEIRO DO 2º ANO SISTEMAS DE INFORMAÇÃO UFMS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>


// FORMA GERAL DE UMA FUNÇÃO:


//    especificador_de_tipo nome_da_função(lista de parâmetros)
//    {
//    Corpo da função
//    }

// Espicificador_de_tipo especifica o tipo de valor que o comando return da função devolve.

// Se nenhum tipo é especificado, o compilador assume que a função devolve um resultado inteiro.

/* A lista de parametros é uma lista de nomes de variaveis separados por virgulas 
e seus tipos associados que recebem o valores dos argumentos quando a função é chamada.*/
/* Uma função pode não ter parametros, neste caso a lista de parametros é vazia.
no entanto, mesmo que não exista parâmetros, os parenteses ainda são necessários.*/
/* Voce pode declarar muitas variaveis como sendo um tipo comum, tendo tipo e o
nome da variável de forma geral fica assim:*/
// f(tipo nomeVAR1, tipo nomeVAR2,...tipo nomeN)

// REGRA DE ESCOPO DE FUNÇÕES:

/* Um código de uma função é privativo aquela função e não pode ser acessado por 
nenhum comando em outra função, exceto por meio de uma chamada à função.*/
/* O codigo e os dados que são definidos internamente a uma função não podem 
interagir com o código ou dados definidos em outra função porque as duas funções
tem escopos diferentes.*/
/* Variaveis que são definidas internamente a uma função são chamadas variaveis 
locais. Uma variável local vem a existir quando ocorre a entrada da função e ela
é destruida ao sair.*/
/* A única exceção ocorre quando a variável é declarada com especificador de 
tipo de armazenamento STATIC. O compilador trata como se ela fosse uma variável 
global para fins de armazenamento, mas ainda limita seu escopo para dentro da função.*/
/* Em C, todas as funções estão no mesmo nível de escopo. Isto é, não é possível
deinir uma função internamente a uma função. Esta é a razão de C não ser 
tecnicamente uma linguagem estruturada em blocos.*/

// ARGUMETOS DE FUNÇÕES:

/* Se uma função usa argumetos, ela deve declarar variáveis que aceitem os valores
dos argumentos, ela deve declarar variáveis que aceitem os valores dos arguemtos.*/
// Essas variáveis são chamadas de PARAMETROS FORMAIS da função.
/* Elas se comportam como quaiquer outras variáveis locais dentro da função e são
criadas na entrada e destruidas na saída.*/
// Como mostra a função seguinte, a declaração de parâmetros ocorre após o nome da função.

/* devolve 1 se c é parte da string s; 0 caso contrário.*/

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
/* Voce deve assegurar-se de que os argumetos usados para chamar a função seja
compatíveis, o Compilador não gera uma mensagem de erro, mas ocorre erros inesperados.*/

// CHAMADA POR VALOR

/* Esse método copia o valor de um argumento no parametro formal da sub-rotina.
Assim, auterações feitas no Parâmetro da sub-rotina não tem nenhum efeito nas
variaveis usadas para chamar a rotina
ex: na função sqr(int x)*/

int sqr(int x) // função passagem por valor
{
    x=x*x;
    return (x);     
}
// Apenas a variavel x é modificada, a valor apresentado pelo usuario continua o mesmo valor.
// O que ocorre dentro da função não tem efeito algum sobre a variável usada na chamada.

void swap(int *x, int *y) //função passagem por referência
{
     int temp;
     temp=*x; // a variavel temp está recebendo valor de x;
     *x=*y; //pôe y em x;
     *y=temp; // pôe x em y;
     
}
/* swap() é capaz de  trocar os valores das duas variáveis apontadas por x e y porque
são passados seus endereços (e não seus valores). Daí que, dentro da função, o conteúdo
das variáveis pode ser acessado usando as operações padrão de ponteiro. Portanto
o conteúdo das variaveis usadas para chamar a função é trocado.*/



int sqr (int x); //função passagem por valor
void swap(int *x, int *y); // função passagem por referência

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
    swap(&i,&j); //passa os endereços por chamada por referência de i e j.
    
    printf("\n\t i=%d  j=%d depois da chamada da funcao por referencia \n\t altera os valor das variavei locais\n\n\n",i,j);
    printf("---------------------------------------------------fim\n");
    system("pause");
    return 0;
}
// CHAMADA POR REFERÊNCIA

/* Nesse método, o endereço de um argumento é copiado no parâmetro. Dentro da sub-rotina,
o endereço é usado para acessar o argumento real utilizado na chamada. Isso sigifica que
alterações feita no parâmentro afetam a variável usada para chamar a rotina.*/
/* Voce pode criar uma chamada chamada por reerencia passando um ponteiro para o argumento.
Ponteiros são passados para a função como qualquer outra variável. exemplo função swap()*/



