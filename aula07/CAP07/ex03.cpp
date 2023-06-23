#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	
	int vetor[10], x, y=0; 
	printf("PREENCHE UM VETOR COM N%cMEROS PARES ENTRE 2 A 20:",233);
		for (x=0; x<=9; x++)
		{
			vetor[x]=y+2;
			y=y+2;			
		}
		for (x=0; x<=9; x++){
			printf("%d\n", vetor[x]);
			
		}
		
		system("pause");
		
		return(0);
		
}
