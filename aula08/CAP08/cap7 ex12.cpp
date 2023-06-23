#include <windows.h>
#include<stdio.h>
#include<string.h>

main(){
	system("cls"); 
	int i;
	float PR1[6],PR2[6],med[6];
	char nomes[6][60],sit[6][120];
	
	for(i=0;i<6;i++){
		system("cls");
		//receber nome e notas do estudante atual.
		printf("Digite o nome do(a) estudante %d:",i+1);
		scanf("%s",nomes[i]);
		printf ("\nDigite a nota da PR1 de %s:",nomes[i]);
		scanf ("%f",&PR1[i]);
		printf ("Digite a nota da PR2 de %s:",nomes[i]);
		scanf ("%f",&PR2[i]);
		//calcular a media do estudante atual.
		med[i]=(PR1[i]+PR2[i])/2;
		//Entender a situação do estudante atual.
		if(med[i]>5){
			strcpy(sit[i],"Parabens sua situacao: Aprovado");
		}
		else
		strcpy(sit[i],"Infelizmente sua situacao: Reprovado");
	}
	system("cls");
	//mostrar para o usuário as médias e as situações de cada estudante digitado.
	for(i=0;i<6;i++){
		printf("%s voc%c teve uma m%cdia = %.2f. %s\n\n",nomes[i],136,130,med[i],sit[i]);
	}
	getchar();
	system ("pause");
	
	return 0;
}
