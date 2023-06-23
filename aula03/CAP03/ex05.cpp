#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

main(){
	system("cls");
	float a, b, c, delta, x1, x2;
	int y; 
	
	printf("Programa calculo Baskara!\n\n");
	
	Menu:
	printf("Informe o valor de A, B, C:\n");
	scanf("%f%f%f", &a, &b, &c);
	
	delta = (b * b ) - (4 * a * c);
	
	x1 = (-b + sqrt(delta) /2 * a );
	
	x2 = (-b - sqrt(delta) / 2 * a) ;
	
	if (delta < 0)	{
		printf("Delta Negativo: Impossivel obter raiz \n");
		goto fim;
	}
	
	else
		if(delta > 0 ){
			printf("Delta Positivo: %.2f\n", delta);
			printf("X1: %.2f\n", x1);
			printf("X2: %.2f\n", x2);
		}
	else
		if(delta == 0){
			printf("Delta: %.2f\n", delta ) ;
			printf("X1: %.2f\n", x1);
			printf("X2: %.2f\n", x2);
		}
	
		printf("Voltar pro Menu?\n\n");
		printf("1-Sim ou 2-Nao\n\n");
		scanf("%d", &y);
		if(y==1)
		{
			goto Menu;	
		}
		if(y==2)
		{
			
			goto fim;
		}	
	
	
	
fim:
system("pause");	
	
}

