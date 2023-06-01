#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	
	int tam; 
	char nome[30];
	int x, y=0;
	printf("MOSTRA CARACT%cRES DIFERENTES DE UM NOME E SUAS POSI%c%cES EM UM VETOR:\n\n",144,135,229);
		
	printf("Insira um nome:\n\n");
	fgets(nome, sizeof(nome), stdin);
	nome[strcspn(nome, "\n")] = '\0';
	tam=strlen(nome);
		
	printf("O nome digitado %c %s!!\n\n",130,nome);
	printf("Na posi%c%co [%d] o primeiro car%ccter digitado: %c\n\n",135,134,y,130,nome[0]);
	y=tam-1;
	printf("Na posi%c%co [%d] o %cltimo car%ccter digitado: %c\n\n",135,134,y,163,130, nome[y]);
	printf("Na posi%c%co [%d] o quarto car%ccter digitado: %c\n\n",135,134,y,130,y=3, nome[3]);
	
	
	system("pause");
		
	return(0);
		
}
