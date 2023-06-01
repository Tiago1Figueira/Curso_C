#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main()
{
	system("cls");
	
	int a, b; 
	printf("PROGRAMA QUE IMPRIME DUAS SEQU%cNCIAS DE N%cMEROS UM NA SEQU%cNCIA NORMAL E OUTRO NA FORMA INVERSA:",210,233,210);	
	
	for(a=0,b=10;a<=10,b>=0;a++,b--)
	{
		printf("%d = %d\n",a,b);
		Sleep(500);
	}
	
	fim:
	system("pause");
}
