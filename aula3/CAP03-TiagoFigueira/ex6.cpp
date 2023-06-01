#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){
	
	float numero, metade;
	
	printf("IMPRIME A METADO DO NUMERO SE ELE FOR MAIOR QUE 20!\n\n");
	
	printf("Insira um numero:\n");
	scanf("%f", &numero);
	
	if (numero > 20){
		metade = numero / 2;
		printf("A metado do numero %.2f e %.2f!", numero, metade);
	}
	else{
		printf("O numero %.2f e menor do que 20!", numero);
		}
	
	}

