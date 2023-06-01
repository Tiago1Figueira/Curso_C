#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

main(){
	system("cls");
	int a, b, y; 
	
	Menu:
	printf("Programa coloca numeros em ordem decrescente!\n\n");
	printf("Digite dois valores:\n\n");
	scanf("%d%d", &a,&b);
	
	if (a>b)
	{
		printf("Ordem decrescente \n %d  %d\n\n", a,b);		
	}
	else 
		if (b>a){
		printf("Ordem decrescente \n %d  %d\n\n", b,a);
		
		}
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
