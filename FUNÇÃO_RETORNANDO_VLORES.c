// PROGRAMA DESENVOLVIDO COMENTADO POR MURILO RIBEIRO DO 3� ANO SISTEMAS DE INFORMA��O UFMS
#include <stdlib.h>
#include <stdio.h>
// FUN��ES ETORNANDO VALORES

/*
 Todas as fu��es,exceto as do tipo void, devolvem um valor. Esse valor � especificado
explicitamente pelo comando return. Se nenhum comando return estiver presente, ent�o
o valor de retorno da fun��o ser� tecnicamente indefinido.(Geralmente, os compiladores
C devolvem 0 quando nenhum valor de retorno for especificado explicitamente, mas 
voce n�o deve contar com isso se h� interrese em portabilidade.)Em outras palavras,
apartir do momento que uma fun��o n�o � declarada como void, ela pode ser usada como
operando em qualquer express�o em C. Assim, cada uma das seguintes express�es � v�lida
em C. 
Todas as fun��es que n�o devolvem valores devem ser declaradas como retornando
o tipo void. Ao declarar uma fun��ocomo void, voce a protege de ser usada em uma
express�o, evitando uma utiliza��o errada acidental. 
*/  

int mul(int a, int b);
int main()
{
    int x,y,z;
    
    x = 10;
    y = 20;
    z = mul(x, y);                          // 1
    printf("\n\t%d \n\n",mul(x,y));       // 2
    mul(x, y);                            // 3
    system("pause");
}
 int mul(int a, int b)
 {
     int j; 
     j = a * b;  // OU PODERIA SER DIRETO [ return a*b; ] 
     return(j);     
 }
/* 
Na linha 1, o valor de retorno de mul() � atribu�do a z. Na linha 2, o valor de
retorno n�o � realmente atribuido, mas � usado pela fun��o printf(). finalmente 
na linha 3, o valor de retorno � perdido porque n�o � atribuido aoutra variavel
nem usada como parte de uma express�o.
N�o precisa atribuir esse valor a alguma atribui��o especiicada, o valor de 
retorno � simplesmente descartado. 
*/
