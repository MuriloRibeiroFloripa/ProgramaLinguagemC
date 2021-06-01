#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>

main(){
	char nome[30];
	int x, t, a = 0;
	
	printf("\n\t INFORME UMA FRASE : ");
	gets(nome);
	
	t = strlen(nome);
	for (x=1; x <= t-1; x++){
		if (nome[x] == 'a')
		a++;
	}
	
	printf("\n O Frase: [%s] ",(nome));
	printf("tem [=== %d ===] letra [a] maiusculas.",a);
	printf("\n\n");
	
	system("pause");
	return(0);
}


