#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>

main()
{
	
	int n;
	
	do{
		printf("######### N%cMERO %c PAR, IMPAR OU O para sair:###########\n\n",163,130);
		printf("Insira um n%cmero inteiro (o para sair) :\n\n",163);
		scanf("%d", &n);
		
		if (n%2==0){
			printf("N%cmero %d %c par!\n\n",163, n,130);
		}
		else
		if(n%2!=0){
			printf("N%cmero %d %c impar!\n\n",163, n,130);
		}
		else
		if(n==0){
			printf("Voce saiu!!\n\n");
			break;
		}
		
	}
		
	while (n!=0);
	
	
}

