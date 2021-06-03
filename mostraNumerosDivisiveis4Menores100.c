#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
main(){
	int x;
	for(x = 1; x < 100; x++)
		if (x % 4 == 0)
			printf("%d\n",x);
	
	system("pause");
	return 0;
}
