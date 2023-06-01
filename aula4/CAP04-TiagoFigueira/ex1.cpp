#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h> 

main(){
	system ("cls");
	int a; 
	printf("PROGRAMA QUE CONTA DE 0 A 100 PAUSADAMENTE:\n\n");
	printf("Programa de 0 a 100:\n\n");
	
	for(a=0; a<=100; a++)
	{
	printf("%d\n" ,a);		
	Sleep(500);
		
	}
	
	fim:
	system("pause");
}
