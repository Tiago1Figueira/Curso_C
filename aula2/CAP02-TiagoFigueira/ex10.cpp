#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	
	float raio, area, pi = 3.14159;
	
	printf("Insira o valor do raio da pizza:");
	scanf("%f", &raio);
	
	area = pi * ( raio * raio ) / 2;
	
	
	printf("A area da meia pizza e: %.2f centimetros", area);
			
	
}

