#include <stdio.h>
main(){
	
	int linha, coluna;
	
	printf("\n");
	linha = 1; 
	while (linha < 7){
		
		printf("\t");
		coluna = 1;
		while (coluna < linha){
			printf("*");
			coluna = coluna + 1;
		}
		printf("\n");
		linha+= 1; 
	}
	
	
}
