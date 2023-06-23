#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>


main(){
	system("cls");
	float x, num1, num2;
	int y, numero;
	
	menu:
	printf("PROGRAMA CALCULADORA!\n\n");
	
	printf("Indique qual e a operacao matematica desejada:\n");
	printf("Opcoes:\n1-Soma:\n2-Subtracao:\n3-Multiplicacao:\n4-Divisao:\n5-Sair\n");
	
	printf("Opcao N:  ");
	scanf("%d", &numero);
	
	if (numero == 1){ 
		soma:
		printf("Soma!\n");
		printf("Insira o primeiro numero:\n");
		scanf("%f", &num1);
		printf("Insira o segundo numero:\n");
		scanf("%f", &num2);
		x = num1 + num2;
		printf("Soma e:%.2f\n\n", x);
		printf("Voltar pro Menu?\n\n");
		printf("1-Sim ou 2-Nao\n\n");
		scanf("%d", &y);
		if(y==1)
		{
			goto menu;	
		}
		if(y==2)
		{
			goto soma;
		}
		
	}
	else
		if (numero == 2){
		subtracao:
		printf("Subtracao!\n");
		printf("Insira o primeiro numero:\n");
		scanf("%f", &num1);
		printf("Insira o segundo numero:\n");
		scanf("%f", &num2);
		x = num1 - num2;
		printf("Subtracao e:%.2f\n\n", x);
		printf("Voltar pro Menu?\n\n");
		printf("1-Sim ou 2-Nao\n\n");
		scanf("%d", &y);
		if(y==1)
		{
			goto menu;	
		}
		if(y==2)
		{
			goto subtracao;
		}	
			
		}
		else	
		if (numero == 3){
		multiplicacao:
		printf("Multiplicacao!\n");
		printf("Insira o primeiro numero:\n");
		scanf("%f", &num1);
		printf("Insira o segundo numero:\n");
		scanf("%f", &num2);
		x = num1 * num2;
		printf("Multiplicacao e:%.2f\n\n", x);
		printf("Voltar pro Menu?\n\n");
		printf("1-Sim ou 2-Nao\n\n");
		scanf("%d", &y);
		if(y==1)
		{
			goto menu;	
		}
		if(y==2)
		{
			goto multiplicacao;
		}	
			}
		
		
		else		
		if (numero == 4){
		divisao:
		printf("Divisao!\n");
		printf("Insira o primeiro numero:\n");
		scanf("%f", &num1);
		printf("Insira o segundo numero:\n");
		scanf("%f", &num2);
		x = num1 / num2;
		printf("Divisao e:%.2f\n\n", x);
		printf("Voltar pro Menu?\n\n");
		printf("1-Sim ou 2-Nao\n\n");
		scanf("%d", &y);
	  	if(y==1)
		{
			goto menu;	
		}
		if(y==2)
		{
			goto divisao;
		}	
			
		}
		else	
			if (numero == 5)
		{
			printf("Voce saiu!\n");
			goto fim;
			 
		}
fim:
system("pause");
	}
	
	
	
