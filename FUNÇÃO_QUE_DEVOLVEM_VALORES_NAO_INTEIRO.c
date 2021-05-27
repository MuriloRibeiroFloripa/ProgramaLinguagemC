// PROGRAMA DESENVOLVIDO COMENTADO POR MURILO RIBEIRO DO 3� ANO SISTEMAS DE INFORMA��O UFMS
#include <stdlib.h>
#include <stdio.h>

// FU��ES QUE DEVOLVEM VALORES N�O-INTEIRO.

/*
Quando o tipo da fun��o n�o � explicitamente declarado, o compilador C atribui
automaticamente a ela o tipo padr�o, que � int. As fun��es podem ser declaradas
como retornando qualquer tipo de dados validos em C. O m�todo  da declara��o �
semelhante � declara��o de vari�veis: o especificador de tipo precede o nome da
fun��o. O especificador de tipo informa ao compilador que tipo de dados a fun��o
devolver�. Essa informa��o � cr�tica para o programa rodar corretamente, porque
tipos de dados diferentes t�m tamanhos e representa��es internas diferentes
*/


float num(); 
/*
 na abordagem tradicional, voce especifica o tipo e o nome da fun��o pr�ximos
ao inic�o do programa para informar a compilador que uma fun��o devolver� algum
tipo de dados com valor diferente de um inteiro, como ilustrado nesse programa.
*/

float first ,second;
/*
Declara��o de vari�vel global assim n�o precisa declarar novamente na fun��o �
utilizada a mesma vari�vel para a soma. Se fosse declarada como vari�vel local o
compilador n�o compilaria o programa e pediria a declara��o das variaveis na soma.
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
