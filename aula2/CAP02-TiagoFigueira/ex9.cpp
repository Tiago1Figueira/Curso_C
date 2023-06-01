#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	
	float perimetro, raio; 
	float pi = 3.14159;
	
	printf("Algoritmo que calcula o valor do perimetro do bambole\n:");
	printf("Insira o valor do raio do bambole:");
	scanf("%f", &raio);
	
	perimetro = 2 * pi * raio; 
	
	printf("O valor do perimetro do bambole e: %.2f \n", perimetro);
	
	
	
}
