#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

main(){
	system("cls");
	int a, b, c, d, y; 
	
	Menu:
	printf("Programa coloca numeros em ordem decrescente!\n\n");
	printf("Digite quatro valores:\n\n");
	scanf("%d%d%d%d", &a,&b,&c,&d);
	
	if (a>b && a>c & a>d )
	{
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", a,b,c,d);		
	}
	else 
		if (a>b && b>d && d>c ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", a,b,d,c);
		
		}
	else 
		if (a>c && c>d && d>b ) {
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", a,c,d,b);
		
		}
	else
		if (a>c && c>b && b>d ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", a,c,b,d);	
		
		}
	else 
		if (a>d && d>c && c>b ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", a,d,c,b);
		
		}
	else
		if (a>d && d>b && b>c ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", a,d,b,c);
		
		}
	else //B 
		if (b>a && a>c && c>d ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", b,a,c,d);
		
		}
	else
		if (b>a && a>d && d>c ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", b,a,d,c);
		
		}
	else
		if (b>c && c>d && d>a ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", b,c,d,a);
		
		}
	else
		if (b>c && c>a && a>d ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", b,c,a,d);
		
		}
	else
		if (b>d && d>c && c>a ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", b,d,c,a);
		
		}
	else
		if (b>d && d>a && a>c ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", b,d,a,c);
		
		}
	else  //C
		if (c>d && d>b && b>a ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", b,d,a,c);
		
		}
	else
		if (c>d && d>a && a>b ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", c,d,a,b);
		
		}
	else
		if (c>b && b>a && a>d ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", c,b,a,a);
		
		}
	else
		if (c>b && b>d && d>a ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", c,b,d,a);
		
		}
	else
		if (c>a && a>d && d>b ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", c,a,d,b);
		
		}
	else
		if (c>a && a>b && b>d ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", c,a,b,d);
		
		}
	else //D
		if (d>c && c>b && b>a ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", d,c,b,a);
		
		}
	else
		if (d>c && c>a && a>b ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", d,c,a,b);
		
		}
	else
		if (d>b && b>c && c>a ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", d,b,c,a);
		
		}
	else
		if (d>b && b>a && a>c ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", d,b,a,c);
		
		}
	else
		if (d>a && a>b && b>c ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", d,a,b,c);
		
		}
	else
		if (d>a && a>c && c>b ){
		printf("Ordem decrescente \n %d  %d  %d %d \n\n", d,a,c,b);
		
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
