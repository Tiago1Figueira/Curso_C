#include <windows.h>
#include <stdio.h>
#include <string.h>

main(){
	//Preencher um vetor com 3 nomes com 20 letras no máximo cada. Imprimir os Nomes.
	char nome[3][21];
	int i;
	
	for(i=0;i<=2;i++){
		printf("Digite um nome como no maximo 20 letras:");
		gets(nome[i]);
	}
	printf("Nomes digitados:\n\n");
	for(i=0;i<=2;i++){
		printf("Nome %d: %s\n",i+1,nome[i]);
	}
	system("pause");
}
