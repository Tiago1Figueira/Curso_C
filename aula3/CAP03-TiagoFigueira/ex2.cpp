#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	
	float numero;
	
	printf("CHECA SE O NÚMERO É POSITIVO, NEGATIVO OU NULO:\n\n");
	printf("Insira um numero:");
	scanf("%f", &numero);
	
	if (numero < 0){
		printf("Numero negativo!");
		}
	
	else{
		if (numero > 0)
			printf("Numero positivo!");
			
			
	else 
		if(numero == 0)
			printf("Numero nulo!");
		
	}
	
}
