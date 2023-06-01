#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>

main()
{
	int n, n1;
	
	while(1){
	
	printf("######### N%cMERO %c PAR, IMPAR OU O para sair:###########\n\n",163,130);
	printf("Insira um n%cmero inteiro (0 para sair):\n\n",163);
	scanf("%d", &n);
	
	
		if (n == 0)
		{
			printf("Programa encerrado!");
			break;
		}
		
	n1 = n%2;
	
	switch(n1){	
		
		case 0:
			printf("N%cmero %d %c par!\n\n",163, n, 130);
			break;
			
		case 1:
			printf("N%cmero %d %c impar!\n\n",163, n, 130);
			break;
			
		default:
			printf("O valor n%co %c par nem impar!\n\n",163 ,130);	
			break;
	}
	}
}     
        
        
        


