#include <stdio.h>
#include <conio.h>
#include <math.h>

float raioI, raioE;
float areaInterna, areaExterna, areaFinal;
float pi =  3.14159;

main(){
	
	printf("Calcule a area da ferradura:\n\n");

	printf("Insira o valor do raio interno:");
	scanf("%f", &raioI);

	printf("Insira o valor do raio externo:");
	scanf("%f", &raioE);

	areaInterna = pi * (raioI * raioI) / 2;
	areaExterna = pi * (raioE * raioE) / 2;

	areaFinal = areaExterna - areaInterna ;

	printf("A area da ferradura e: %.2f" , areaFinal);
	
	
}




