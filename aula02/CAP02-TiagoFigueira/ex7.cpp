#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){

	float perimetro, area, raio;
	float pi = 3.14159; 

	printf("Programa de C�lculo de Per�metro e �rea de Circunfer�ncia\n");
	
	printf("Digite o valor do raio\n:");
	scanf("%f", &raio);
	
	perimetro = 2 * pi * raio;
	
	area = pi * (raio * raio);  // area = pi * pow(raio, 2); 
	
	printf("O perimetro da circunferencia e: %.2f \n", perimetro);
	
	printf("A area da circunferencia e: %.2f \n", area);
	
	
}

