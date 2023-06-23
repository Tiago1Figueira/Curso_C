#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	system("cls");
	
	printf("PREENCHE UM VETOR DE 6 N%cMERO E O MOSTRA NA TELA:\n\n",233);
	
	int x, vetor[6];
	for (x=1; x<=6; x++)
	{
		printf("Digite um n%cmero:\n\n",233);
		scanf("%d\n", &vetor[x]);
		
	}
	for (x=1; x<=6; x++)
	{
		
		printf("%d", vetor[x]);
		printf("\n\n");	
		
	}
	system("pause:");
	
	return 0;
}
