#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>

main()
{
	system("cls");
	printf("PROGRAMA QUE IMPRIME DA LETRA Z AT%c A COM INTERVALO DE UM DECIMO POR SEGUNDO:\n\n",144);
	
char a = 'z'; 
	
	while (a >= 'a')
	{
		
		printf("%c\n", a);
		Sleep (100);
		a--;
	}
	
	fim:
		system("pause");	
}


