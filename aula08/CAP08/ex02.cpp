#include <windows.h>
#include <stdio.h>
#include <string.h>

main(){
	system ("cls");
	
	int matriz[4][4], linha, coluna,tab;
	
	for(linha=0;linha<4;linha++){
		for(coluna=0;coluna<4;coluna++){
			printf("Digite o elemento da linha [%d] e coluna [%d]:",linha+1, coluna+1);
			scanf ("%d",&matriz[linha][coluna]);
		}	
	}

	printf("Matriz\n");
	for (linha=0;linha<=3;linha++){
		for (coluna=0;coluna<=3;coluna++){
		printf("%d\t",matriz[linha][coluna]);
		}
		printf("\n\n");
	}

	printf("\n\nElementos da diagonal principal\n\n");
	for (linha=0; linha<=3;linha++){
		printf("%d\n",matriz[linha][linha]);
		for (tab=1;tab<=linha+1;tab++){
			printf("\t");
		}
	}
	printf("\n\n");
	
	system("pause");
}
