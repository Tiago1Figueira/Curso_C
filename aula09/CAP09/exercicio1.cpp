#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main() 
{
	system("cls");
	setlocale(LC_ALL,"Portuguese");
	
	int n1=10,n2;
	int *Pn1;
	
	Pn1=&n1;
	
	printf("Valor atual: %d\n\n", n1);
	n2=*Pn1;

	printf("Digite um novo valor:");
	scanf("%d",&n2);
	
	*Pn1=n2;
	
	printf("Valor atual: %d\n\n", n1);
	
	system("pause");
	return 0;
}

