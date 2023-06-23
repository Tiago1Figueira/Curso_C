#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>

main()
{
	system("cls");
	char x;
	printf("PROGRAMA QUE IMPRIME DA LETRA A AT%c Z NA FORMA INVERSA PAUSADAMENTE:\n\n",144);
	for(x= 'z'; x>='a'; x--)
	{
		printf("%c\n", x);
		Sleep(500);
	}
	
	
	
	fim:
	system("pause");
}

