#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>

main()
{
	int n, x, i;
	do{
		menu:
		system("cls");
		printf("PROGRAMA QUE IMPRIME A PALAVRA FATEC O N%cMERO DE VEZES QUE FOR DIGITADA:\n\n",163);
		printf("Insira o n%cmero de vezes que FATEC sera imprimida(0 para sair):\n\n",163);
		scanf("%d",&n);
		
		i = 0;	
		while (i < n){
			printf("FATEC\n");
			i++;
			Sleep(1000);
		} 
	}while (n!=0);
	
	system("cls");
	printf("Deseja continuar?\n");
	printf("1-Sim ou 2-N%co\n",198);
	scanf("%d", &x);
	
	if (x==1){
			goto menu;
			
		}
		else
		if (x==2){
			goto end;
		}
	
	end:
	system("pause");
}

