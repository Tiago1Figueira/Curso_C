#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	
	int a, b, c, d, x;
	printf("CONVERTER 4 BITS EM DECIMAL:\n\n");
		
	printf("Insira o valor binario:\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	x = (a * 8) + (b * 4) + (c * 2) + (d * 1);
	
	printf("valor decimal: %d\n", x);
	
}
