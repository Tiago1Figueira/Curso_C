#include <stdio.h>
#include <windows.h>
#include <math.h>


main(){
	
	system("cls");	
	printf("PROGRAMA QUE IMPRIME DA LETRA A AT%c Z COM INTERVALO DE 0.1!\n\n",144 );
	
	char a = 'a'; 
	
	while (a <= 'z')
	{
		
		printf("%c\n", a);
		Sleep (100);
		a++;
	}
	
	fim:
		system("pause");	
}



