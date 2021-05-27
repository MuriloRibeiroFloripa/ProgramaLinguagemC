#include <stdio.h>
#include<stdlib.h>

int main(){
	int i;
	
	for(i = 0; i < 100; i ++) {
		printf("\t %d \n", i);
    	if(i == 10) 
		break;
  	}
  system("pause");
}
