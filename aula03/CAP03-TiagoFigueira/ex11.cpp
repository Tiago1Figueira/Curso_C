#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

main(){
	system("cls");
	start:
	int n1,n2,n3,n4,n5,n6, escolha;
	
	printf("Programa Mega Sena\n");
	
	srand(time(NULL));
	sorteio1:
	n1=1+(rand()%60);
	sorteio2:
	n2=1+(rand()%60);
	sorteio3:
	n3=1+(rand()%60);
	sorteio4:
	n4=1+(rand()%60);
	sorteio5:
	n5=1+(rand()%60);
	sorteio6:
	n6=1+(rand()%60);
	

	if(n2==n1){
		goto sorteio2;
	}
	else
	if(n3==n1||n3==n2){
		goto sorteio3;
	}
	else
	if(n4==n1||n4==n2||n4==n3){
		goto sorteio4;
	}
	else
		if(n5==n1||n5==n2||n5==n3||n5==n4){
		goto sorteio5;
	}
	else
		if(n6==n1||n6==n2||n6==n3||n6==n4||n6==n5){
		goto sorteio6;
	}
	else
	printf("Os n%cmeros sorteados foram:\n",163);
	printf("%d, %d, %d, %d, %d e %d\n\n", n1,n2,n3,n4,n5,n6);
	printf("Deseja sortear outros numeros?\n1-Sim\n2-Nao\n");
	scanf("%d", &escolha);
	
	if(escolha==1){
		goto start;
	}
	else
	system("pause");
}
