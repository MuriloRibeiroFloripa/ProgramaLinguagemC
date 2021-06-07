#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

main(){
	
	int x, n1, n2;
	
	printf("\n\n Digite um numero: ");
	scanf("%d",&x);
	
	n1=x+1;
	n2=x-1;
	
	printf("\n\nSeu sucessor e : %d",n1);
	printf("\n\nSeu antecessor e : %d",n2);
	printf("\n\n");
	
	system("pause");
	return (0);
}
