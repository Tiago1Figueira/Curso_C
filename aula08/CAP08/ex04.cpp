#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	int lin, col;
	float mat1[3][3], mat2[3][3];
 
	printf("Matriz 1:\n");
	for(lin=0;lin<3;lin++){
		for(col=0;col<3;col++){
 		printf("Digite o elemento da linha %d e coluna %d: ",lin+1,col+1);
 		scanf("%f",&mat1[lin][col]);
		} 
	}
	printf("\n\n");
	printf("Matriz 2:\n");
	for(lin=0;lin<3;lin++){	
		for(col=0;col<3;col++){
			printf("Digite o elemento da linha %d e coluna %d: ",lin+1,col+1);
			scanf("%f",&mat2[lin][col]);
		} 
	} 
	printf("\n\n");
	printf("Matriz 1 valores originais:\n");
	for(lin=0;lin<=2;lin++){	
		for(col=0;col<=2;col++){
			printf("%.0f\t",mat1[lin][col]);
		} 
		printf("\n\n");
	}
	printf("\n\n");
	printf("Matriz 1 raiz dos valores originais:\n");
	for(lin=0;lin<=2;lin++){
		for(col=0;col<=2;col++){
			printf("%.0f\t",sqrt(mat1[lin][col]));
		} 
		printf("\n\n");
	}
	printf("\n\n");
	printf("Matriz 2 valores originais:\n");
	for(lin=0;lin<=2;lin++){
		for(col=0;col<=2;col++){
			printf("%.0f\t",mat2[lin][col]);
		} 
		printf("\n\n");
	}
	printf("\n\n");
	printf("Matriz 2 raiz dos valores originais:\n");
	for(lin=0;lin<=2;lin++){
		for(col=0;col<=2;col++){
			printf("%.0f\t",sqrt(mat2[lin][col]));
		} 
		printf("\n\n");
	}
	printf("\n\n");
	system ("pause");
}
