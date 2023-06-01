#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

main(){
	system("cls");
	
	int n1,n2,n3,n4,n5,n6;
	int y; 
	
	start:
	randomize();
	clrscr();
	
	printf("PROGRAMA DE SORTEIO DA MEGA-SENA!\n\n");
	printf("Sorteio da Mega-Sena acumulada de R$ 60.000.000 reais!\n\n");
	n1=random(60);
	n2=random(60);
	n3=random(60);
	n4=random(60);
	n5=random(60);
	n6=random(60);
	
	
	
	
	printf("Voltar pro Menu?\n\n");
		printf("1-Sim ou 2-Nao\n\n");
		scanf("%d", &y);
		if(y==1)
		{
			goto Menu;	
		}
		if(y==2)
		{
			
			goto fim;
		}	
	
	fim:
	system("pause");
	
	
}
