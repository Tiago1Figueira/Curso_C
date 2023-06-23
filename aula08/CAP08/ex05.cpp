#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

main()
{
	int lin,col,D;
	float mat1[3][3],mat2[3][3];
	
	printf("Digite o determinante: ");
	scanf("%d",&D);
	printf("\n\nMatriz 1:\n");
	for(lin=0;lin<3;lin++)
	{
		for(col=0;col<3;col++)
		{
			printf("Digite o elemento da linha %d e coluna %d: ",lin+1,col+1);
			scanf("%f",&mat1[lin][col]);
		}
	}
	printf("\n\nMatriz 2:\n");
	for(lin=0;lin<3;lin++)
	{
		for(col=0;col<3;col++)
		{
			printf("Digite o elemento da linha %d e coluna %d: ",lin+1,col+1);
			scanf("%f",&mat2[lin][col]);
		}
	}
	printf("\n\n");
	printf("Matriz 1 com determinante multiplicando os elementos:\n");
	for(lin=0;lin<3;lin++)
	{
		for(col=0;col<3;col++)
		{
			printf("%.0f\t",(mat1[lin][col])*D);
		
		}
		printf("\n\n");
	}
	printf("\n\n");
	printf("Matriz 2 com determinante multiplicando os elementos:\n");
	for(lin=0;lin<3;lin++)
	{
		for(col=0;col<3;col++)
		{
			printf("%.0f\t",(mat2[lin][col])*D);
		
		}
		printf("\n\n");
	}
	
	
	system("pause");
}

