#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>

main()
{
	
	int n;
	int x;
	
	menu:
	system("cls");
	printf("PROGRAMA QUE IMPRIME A CONTAGEM REGRESSIVA DO N%cMERO QUE FOR DIGITADO:\n\n",163);
	printf("Insira o n%cmero inteiro desejado:");
	scanf("%d", &n);
	do{
		printf("%d\n\n", n);
		n--;
		Sleep(1000);
	}while (n>=0);
		
	
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

