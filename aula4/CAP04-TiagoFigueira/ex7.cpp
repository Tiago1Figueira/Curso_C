#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>

main()
	{	
	int a, b, c, x;
	system("cls");
		Menu:
		printf("%%%%%%%%%%%%%%%% PROGRAMA DE TABUADA %%%%%%%%%%%%%%%%%%%\n\n");
		printf("Insira o numero da tabuada que voce quer:\n\n");
		scanf("%d", &a);
		for(b=1; b<=10; b++)
		{
			c = a * b; 
			printf("%d * %d = %d\n",a,b,c);
			Sleep(500);
		}
		printf("Deseja voltar ao inicio?\n\n");
		printf("1-Sim ou 2-Nao\n\n");
		scanf("%d", &x);
		if (x==1)
		{
			goto Menu;
		}
		else
			if(x==2)
			{
				printf("Voce saiu!\n");
				goto fim;
			}
		
	fim:
	system("pause");

}
