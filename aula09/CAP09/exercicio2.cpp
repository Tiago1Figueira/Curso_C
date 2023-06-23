#include <windows.h>
#include <stdio.h>
#include <locale.h>
main(){
	system("cls");
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	int *pn1,*pn2;
	n1=5;
	n2=10;
	pn1=&n1;
	pn2=&n2;
	printf ("Ponteiros separados:\n\n");
	printf("Conteúdo do ponteiro 1 = %d\n",*pn1);
	printf("Conteúdo do ponteiro 2 = %d\n",*pn2);
	//atribuir um ponteiro em outro
	*pn1=*pn2;
	printf ("\nPonteiros pós atribuição:\n\n");
	printf("Conteúdo do ponteiro 1 = %d\n",*pn1);
	printf("Conteúdo do ponteiro 2 = %d\n",*pn2);
	*pn1=12;
	n2=n1;
	printf("Ponteiro 1 = %d\nVariável 1 = %d\nPonteiro 2 = %d\nVariável 2 = %d\n\n",*pn1,n1,*pn2,n2);
	system("pause");
}
