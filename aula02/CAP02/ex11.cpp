#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	
	float velocidadeMedia, distancia, tempo, consumo;
	
	printf("Informe o tempo gasto na viagem em horas:");
	scanf("%f", &tempo);
	
	printf("Informe a velocidade media do veiculo:");
	scanf("%f", &velocidadeMedia);
	
	distancia = tempo * velocidadeMedia ;
	
	consumo = distancia / 12; 
	
	printf("O consumo e: %.2f litros",consumo);	
		
	
}
