#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){
	
	int numero;
	
	printf("RECEBE NUMERO POSITIVO E MOSTRA SE E DIVISIVEL POR 10, 5, 2 OU NAO DIVISIVEL;\n\n");
	
	printf("Insira um numero positivo:\n");
	scanf("%d", &numero);
	
	if (numero % 10 == 0 && numero % 5 == 0 && numero % 2 == 0)
	{
	printf("O numero %.2d e divisivel por 10, 5 e 2!", numero);
	}
	
	else
	{
	printf("O numero %.2d nao e divisivel por 10, 5 e 2!", numero);
		}
	
	
	}

