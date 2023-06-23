#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
main(){
	
	system("cls");	
	char a; 	
	printf("PROGRAMA QUE IMPRIME DA LETRA A AT%c Z COM INTERVALO DE 0.5!\n\n",144 );
	
	for (a = 'a'; a <= 'z'; a++)
	{
		printf("%c\n", a);
		Sleep (500);
	}
	
	fim:
		system("pause");	
}
