#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

main(){
	system("cls");
	int a, b, c, y; 
	
	Menu:
	printf("Programa coloca numeros em ordem decrescente!\n\n");
	printf("Digite tres valores:\n\n");
	scanf("%d%d%d", &a,&b,&c);
	
	if (a>b && b>c)
	{
		printf("Ordem decrescente \n %d  %d  %d\n\n", a,b,c);		
	}
	else 
		if (a>c && c>b){
		printf("Ordem decrescente \n %d  %d  %d\n\n",a,c,b);
		
		}
	else 
		if (b>a && a>c){
		printf("Ordem decrescente \n %d  %d  %d\n\n",b,a,c);
		
		}
	else
		if (b>c && c>a){
		printf("Ordem decrescente \n %d  %d  %d\n\n",b,c,a);	
		
		}
	else 
		if (c>a && a>b){
		printf("Ordem decrescente \n %d  %d  %d\n\n",c,b,a);
		
		}
	else
		if (c>b && b>a){
		printf("Ordem decrescente \n %d  %d  %d\n\n",c,b,a);
		
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
