#include <windows.h>
#include <stdio.h>
#include <string.h>


main(){
	system ("cls");
	char palavras[3][40];
	int i;
	
	for(i=0;i<3;i++){
		printf("Escreva a palavra %d: ", i+1);
		gets(palavras[i]);	
	}
	
	printf("\nPalavras na ordem inversa da digitada:\n");
	
	for (i=2;i>=0;i--){
		puts(palavras[i]);
	}
	
	system("pause");
}
