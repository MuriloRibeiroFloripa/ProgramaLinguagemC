// PROGRAMA DESENVOLVIDO COMENTADO POR MURILO RIBEIRO DO 2º ANO SISTEMAS DE INFORMAÇÃO UFMS
#include <stdio.h>
#include <stdlib.h>


void *xgets(char *s);

int main()
{
    char f[80];
    printf("\n\t Informe string ");
    gets(f);
    xgets(f);
    printf("\n\t %s \n\n\n",f);
    system ("pause");
    
}
void *xgets(char *s)
{
     char ch, *p;
     int t;
     
     p=s; //*gets() desenvolve um ponteiro para s.
     for(t=0;t<80;++t)
     {
                      ch=getchar();
                      
                      switch(ch){
                                 case '\n':
                                      s[t]='\0'; //termina a string.
                                      
                                      return p;
                                 case '\b':
                                      if(t>0)t--;
                                      break;
                                 default:
                                         s[t]=ch;
                                 }
     }
     s[80]='\0';
     return p;
}
