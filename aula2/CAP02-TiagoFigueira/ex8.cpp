#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){

	float pes, polegadas, jardas, milhas;
	 

	printf("Programa de Calculo de Polegadas, Jardas, Milhas a partir da medida de pes\n");
	
	printf("Digite a quantidade de pes que deseja converter\n:");
	scanf("%f", &pes);
	
	polegadas = pes * 12;
	
	jardas = pes / 3;  
	
	milhas = pes / 5280; 
	
	printf("%.2f pes e igual a %.2f polegadas \n", pes, polegadas);
	
	printf(" %.2f pes e igual a %.2f jardas \n", pes, jardas);
	
	printf(" %.2f pes e igual a %.2f milhas \n", pes, milhas);
	
	
}

