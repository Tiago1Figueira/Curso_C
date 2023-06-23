#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
	//Preencher um vetor com 3 nomes e mostrar quantas letras A e E tem nos 3 nomes
	char nome[3][40];
	int tam,n,l,A[3],E[3],conta=0,conte=0;
	//Receber 3 nomes do usuário.
	for(n=0;n<3;n++){	
		printf ("Digite um nome:");
		gets(nome[n]);
		}
	//Fazer a contagem de letras A e E de cada nome.
	for(n=0;n<3;n++){
		tam=strlen(nome[n]);
		
		for (l=0;l<tam;l++){
			if(nome[n][l]=='A'||nome[n][l]=='a'){
				conta++;
			}
			else
			if(nome[n][l]=='E'||nome[n][l]=='e'){
				conte++;
			}
		}
		A[n]=conta; //Armazenar a contagem de 'A' do nome atual em um outro vetor.
		E[n]=conte;	//Armazenar a contagem de 'E' do nome atual em um outro vetor.
	
		conta=0; //Zerar a contagem de 'A' do nome atual para iniciar a contagem do próximo nome.
		conte=0; //Zerar a contagem de 'E' do nome atual para iniciar a contagem do próximo nome.		
	}
	
	printf("Existe(m) %d letra(s) A somados nos 3 nomes digitados\n",A[0]+A[1]+A[2]);
	printf("Sendo %d no nome ''%s'', %d no nome ''%s'' e %d no nome ''%s''\n\n",A[0],nome[0],A[1],nome[1],A[2],nome[2]);
	
	printf("Existe(m) %d letra(s) E somados nos 3 nomes digitados\n",E[0]+E[1]+E[2]);
	printf("Sendo %d no nome ''%s'', %d no nome ''%s'' e %d no nome ''%s''\n\n",E[0],nome[0],E[1],nome[1],E[2],nome[2]);
	
	system("pause");
}
