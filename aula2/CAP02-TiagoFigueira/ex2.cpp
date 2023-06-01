#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	
	float a, b, c, delta, x1, x2;
	
	printf("Programa calculo Baskara!\n\n");
	
	printf("Informe o valor de A, B, C:\n");
	scanf("%f%f%f", &a, &b, &c);
	
	delta = (b * b ) - (4 * a * c);
	
	x1 = (-b + sqrt(delta) /2 * a );
	
	x2 = (-b + sqrt(delta) / 2 * a) ;
		
	printf("Delta: %.2f\n", delta ) ;
	printf("X1: %.2f\n", x1);
	printf("X2: %.2f\n", x2);
	
	
}
