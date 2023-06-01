#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>

main(){
	
	system("cls");
	float n1, n2, n3;
	int y;
	
	
	printf("PROGRAMA IDENTIFICADOR DE TRIANGULOS:\n\n");
	Menu:
	printf("Informe o primeiro numero:\n\n");
	scanf("%f", &n1);
	printf("Informe o segundo numero:\n\n");
	scanf("%f", &n2);
	printf("Informe o terceiro numero:\n\n");
	scanf("%f", &n3);
	
	if (n1<n2+n3 != n2<n1+n3 != n3<n1+n2 ){
		printf("Os numeros %.2f, %.2f, %.2f, formam um triangulo!\n\n", n1,n2,n3);
	}
	else
	{
		printf("Esses numeros nao formam um triangulo!\n\n");
	}
	printf("\n\n Voltar pro Menu?\n\n");
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
