#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
main(){
	int horas, vmedia;
	float distancia, consumo;
	
	printf("\n\tInforme o tempo gasto na viagem em horas: ");
	scanf("%d", &horas);
	
	printf("\tInforme a velocidade media do veiculo: ");
	scanf("%d", &vmedia);
	
	distancia = horas * vmedia;
	consumo = distancia / 12;
	
	printf("\tForam gastos [%4.2f LITROS] de combustivel\n\n\n",consumo);
	system("pause");
	return 0;
}
