#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	char palavra[3][30];
	int x; 
	
	system("cls");
	
	printf(" PROGRAMA QUE RECEBE 3 PALAVRAS E AS IMPRIME EM ORDEM INVERSA:\n\n",233);
	
	for (x=0; x<3; x++){
		printf("Insira uma palavra:\n\n");
		fgets("%s", &palavra[x]);
	}
	
	
	
	system("pause:");
	
	return 0;
}
