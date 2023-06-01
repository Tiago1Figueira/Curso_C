#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>

void soma();
void sub();
void mult();
void div();
void repetir();

int escolha, opcao;
float n1,n2, x; 

main(){
	
	system("cls:");
	menu:
	printf("################# PROGRAMA CALCULADORA: #####################\n\n");
	printf("Escolha uma opera%c%co:\n\n1-Adi%c%co\n2-Subtra%c%co\n3-Multiplica%c%co\n4-Divis%co\n5-Sair\n\n",135,198,135,198,135,198,135,198,198);
	scanf("%d", &escolha);

		if (escolha==1)
		{
		soma:
		soma();
		repetir();
		
		if (opcao==1){
			goto soma;
		}
		else
			if(opcao==2){
				
			goto menu;
				
			}
		}
		
		if (escolha==2)
		{
		
		subtracao:
		sub();
		repetir();
				
		if (opcao==1){
			goto subtracao;
		}
		else
			if(opcao==2){
				
			goto menu;
				
			}		
		}
			
		if (escolha==3)
		{
		multiplicacao:
		mult();
		repetir();
		
		if (opcao==1){
			goto multiplicacao;
		}
		else
			if(opcao==2){
				
			goto menu;
				
			}
		}
		if (escolha==4)
		{
		divisao:
		div();
		repetir();
		
		if (opcao==1){
			goto divisao;
		}
		else
			if(opcao==2){
				
			goto menu;
				
			}
		}
		
		if (escolha ==5)
		{
			printf("Voce saiu!\n\n");
			goto fim;
		}	
	
	fim:
	system("pause:");
	
}

	void soma(){
		
		system("cls");
		soma:
		printf("Insira os valores:\n\n");
		scanf("%f%f", &n1,&n2);
		x = n1 + n2;
		printf("%.2f + %.2f = %.2f\n\n",n1,n2,x);
	}
	
	void sub(){
		
		system("cls");
		subtracao:
		printf("Insira os valores:\n\n");
		scanf("%f%f", &n1,&n2);
		x = n1 - n2;
		printf("%.2f - %.2f = %.2f\n\n",n1,n2,x);
	}
	
	void mult(){
		
		system("cls");
		multiplicacao:
		printf("Insira os valores:\n\n");
		scanf("%f%f", &n1,&n2);
		x = n1 * n2;
		printf("%.2f * %.2f = %.2f\n\n",n1,n2,x);
	}
	
	void div(){
	
		system("cls");
		divisao:
		printf("Insira os valores:\n\n");
		scanf("%f%f", &n1,&n2);
		x = n1 / n2;
		printf("%.2f / %.2f = %.2f\n\n",n1,n2,x);
	}
	
	void repetir(){
		
		printf("Deseja continuar?\n");
		printf("1-sim ou 2-n%co\n",198);
		scanf("%d", &opcao);
	}
	
		
		
		
		
