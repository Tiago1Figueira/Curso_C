#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
main(){
	system ("cls");

	float mat[3][3];
	int lin,col,tab,n;

	for(lin=0;lin<3;lin++){
		for(col=0;col<3;col++){
			printf("Digite o elemento da linha [%d] e coluna [%d]:",lin+1, col+1);
			scanf("%f",&mat[lin][col]);
		}
	}
	printf("Matriz com elementos multiplicados por 5:\n");

	for(lin=0;lin<=2;lin++){
		for(col=0;col<=2;col++){
			printf("%.0f\t",mat[lin][col]*5);
		}
		printf("\n\n");
	}

	system("pause");
}
