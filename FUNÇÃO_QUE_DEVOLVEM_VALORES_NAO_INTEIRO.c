// PROGRAMA DESENVOLVIDO COMENTADO POR MURILO RIBEIRO DO 3º ANO SISTEMAS DE INFORMAÇÃO UFMS
#include <stdlib.h>
#include <stdio.h>

// FUÇÕES QUE DEVOLVEM VALORES NÃO-INTEIRO.

/*
Quando o tipo da função não é explicitamente declarado, o compilador C atribui
automaticamente a ela o tipo padrão, que é int. As funções podem ser declaradas
como retornando qualquer tipo de dados validos em C. O método  da declaração é
semelhante à declaração de variáveis: o especificador de tipo precede o nome da
função. O especificador de tipo informa ao compilador que tipo de dados a função
devolverá. Essa informação é crítica para o programa rodar corretamente, porque
tipos de dados diferentes têm tamanhos e representações internas diferentes
*/


float num(); 
/*
 na abordagem tradicional, voce especifica o tipo e o nome da função próximos
ao inicío do programa para informar a compilador que uma função devolverá algum
tipo de dados com valor diferente de um inteiro, como ilustrado nesse programa.
*/

float first ,second;
/*
Declaração de variável global assim não precisa declarar novamente na função é
utilizada a mesma variável para a soma. Se fosse declarada como variável local o
compilador não compilaria o programa e pediria a declaração das variaveis na soma.
*/
    
int main()
{
    
    first=123.23;
    second=99.09;
    
    printf("\n\t%f\n\n\n",num());
    system("pause");
}

float num()
{ 
      return first+second;
}
