#include <windows.h>
#include <stdio.h>
main(){	
	int mat[5][2],lin,col,vet[10],i;
	for(lin=0;lin<5;lin++){
		for(col=0;col<2;col++){
			printf("Digite o elemento da linha %d e coluna %d:",lin+1,col+1);
			scanf("%d",&mat[lin][col]);
		}
	}
	for(lin=0;lin<5;lin++)
	{
		for(col=0;col<2;col++){
			printf("%d\t",mat[lin][col]);
		}
		printf("\n");
	}
	printf("Vetor preenchido com os elementos de sua matriz:\n");
	for(lin=0;lin<10;lin++){
		for(col=0;col<2;col++){
			vet[i]=mat[lin][col];
			i++;
			if(i==10){
				break;
			}
		}
		if(i==10){
			break;	
		}
	}
	for(i=0;i<10;i++){
		printf("%d, ", vet[i]);
	}
	system("pause");	
}
