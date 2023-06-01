#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	int decimal, n1, n2, n3, n4;
	printf("CONVERSAO DE NUMERO DECIMAL EM BINARIO:\n\n");
	
	printf("Insira um valor entre 0 e 15:\n");
	scanf("%d", &decimal);
	
	n4 = (decimal % 2);
	n3 = ((decimal / 2) % 2);
	n2 = ((decimal / 2 / 2) % 2);
	n1 = ((decimal /2 / 2 / 2) % 2);
	
	printf("Binario: %d%d%d%d", n1,n2,n3,n4);
	
}
