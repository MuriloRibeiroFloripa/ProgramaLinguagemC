// PROGRAMA DESENVOLVIDO COMENTADO POR MURILO RIBEIRO DO 3º ANO SISTEMAS DE INFORMAÇÃO UFMS
#include <stdlib.h>
#include <stdio.h>
// FUNÇÕES ETORNANDO VALORES

/*
 Todas as fuções,exceto as do tipo void, devolvem um valor. Esse valor é especificado
explicitamente pelo comando return. Se nenhum comando return estiver presente, então
o valor de retorno da função será tecnicamente indefinido.(Geralmente, os compiladores
C devolvem 0 quando nenhum valor de retorno for especificado explicitamente, mas 
voce não deve contar com isso se há interrese em portabilidade.)Em outras palavras,
apartir do momento que uma função não é declarada como void, ela pode ser usada como
operando em qualquer expressão em C. Assim, cada uma das seguintes expressões é válida
em C. 
Todas as funções que não devolvem valores devem ser declaradas como retornando
o tipo void. Ao declarar uma funçãocomo void, voce a protege de ser usada em uma
expressão, evitando uma utilização errada acidental. 
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
Na linha 1, o valor de retorno de mul() é atribuído a z. Na linha 2, o valor de
retorno não é realmente atribuido, mas é usado pela função printf(). finalmente 
na linha 3, o valor de retorno é perdido porque não é atribuido aoutra variavel
nem usada como parte de uma expressão.
Não precisa atribuir esse valor a alguma atribuição especiicada, o valor de 
retorno é simplesmente descartado. 
*/
