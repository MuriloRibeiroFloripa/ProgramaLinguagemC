#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int tabuada = 0, x;
    
    printf("\nDigite a tabuada que voce deseja \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);
    
	printf("\n");
	
	printf("========================================================\n");
    for(x = 1; x <= 10; ++x){
        //1 x 5 = 5
        printf("\t %i x %i = %i\n", x, tabuada, x * tabuada);
    }
	printf("========================================================\n");
	
    return 0;
}
