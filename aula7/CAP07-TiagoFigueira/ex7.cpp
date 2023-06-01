#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	
	int vetor[8];
	int x, num, achei=0;
	 
	printf("MOSTRA SE NUMERO EXISTE OU NAO EM UM VETOR E O IMPRIME:\n\n");
		
	for(x=0; x<8;x++){
		printf("Digite um número:\n\n");
		scanf("%d", &vetor[x]);
	}
	printf("Insira um valor a ser pesquisado:\n\n");
	scanf("%d", &num);
	for(x=0;x<8;x++){
	}
	
	if (vetor[x]==num)
		printf("O numero %d esta na posicao: %d",num,x);
		printf("O numero %d foi o numero %d a ser digitado:", num, (x+1));
		achei=1;
	}
	if (achei!=1){
		printf("Este numero nao existe!");
	}
	
	
	system("pause");		
	return(0);
		
}
