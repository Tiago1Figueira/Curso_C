#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>

void bin();
void dec();
void repetir();

int b1,b2,b3,b4,b5,d; 
int deci, bina, valor, x;	

main(){
	
	system("cls");		
	printf("PROGRAMA CONVERTE BIN%RIO-DECIMAL E DECIMAL-BINARIO:\n\n");
	menu:
	printf("Escolha uma alternativa:\n\n");
	printf("1-BIN%cRIO-DECIMAL - 2-DECIMAL-BIN%cRIO - 3-SAIR:\n\n",181,181);
	scanf("%d", &valor);
	
	if (valor==1){
		bin:
		bin();
		repetir();
		if (x==1){
			goto bin;
			
		}
		else
		if (x==2){
			goto menu;
		}
	}
	
	if (valor==2){
		dec:
		dec();
		repetir();
		if (x==1){
			goto dec;
			
		}
		else
		if (x==2){
			goto menu;
		}
	}
	
	if (valor==3){
		goto fim;
	}

	fim:
	system("pause:");

}

void bin(){
	system("cls:");
	printf("Bin%crio para Decimal\n\n",181);
	printf("Insira o valor bin%crio para convers%co em decimal:\n\n",181,198);
	scanf("%d%d%d%d%d",&b1,&b2,&b3,&b4,&b5);
	
	bina = ( b1*pow(2,4) + b2*pow(2,3) + b3*pow(2,2) + b4*pow(2,1) + b5*pow(2,0));
	printf("O decimal %c: %d\n\n",130, bina);
	}

void dec(){
	system("cls:");
	printf("Decimal para Bin%crio!\n\n",181);
	printf("Insira o valor decimal para convers%co em bin%crio:\n\n",198,181);
	scanf("%d", &deci);
	
	b1 = (deci%2);
	b2 = (deci/2)%2;
	b3 = (deci/2/2)%2;
	b4 = (deci/2/2/2)%2;
	b5 = (deci/2/2/2/2)%2;
	
	printf("O bin%crio %c: %d%d%d%d%d\n\n",181,130,b1,b2,b3,b4,b5);
	}
void repetir(){
	printf("Deseja continuar?\n");
	printf("1-Sim ou 2-N%co\n",198);
	scanf("%d", &x);
	
	}
	










