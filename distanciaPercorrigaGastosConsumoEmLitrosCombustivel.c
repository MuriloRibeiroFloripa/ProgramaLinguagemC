#include <stdio.h>
#include <stdlib.h>

inte main(){
	float tempoDecorrido, velocidadeMedia, distanciaPercorrida, combustivel;
	
	printf("Digite o tempo de viagem em horas: ");
	scanf("%f",&tempoDecorrido);
	
	printf("Digite a velocidade media: ");
	scanf("%f",&velocidadeMedia);
	
	distanciaPercorrida = tempoDecorrido * velocidadeMedia;
	combustivel = distanciaPercorrida / 12;
	
	printf("Quantidade de litros consumidos: %f", combustivel);
}
