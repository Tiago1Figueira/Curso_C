#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

main(){
	system("cls");
	
	int vet1[5],vet2[5],soma,i;
	
	printf("Vetor 1:\n");
	for (i=0;i<5;i++){
		printf("Digite o n%cmero %d:",163,i+1);	
		scanf("%d",&vet1[i]);	
	}
	system("cls");
	printf("Vetor 2:\n");
	for (i=0;i<5;i++){
		printf("Digite o n%cmero %d:",163,i+1);	
		scanf("%d",&vet2[i]);	
	}
	system("cls");
	printf("Vetor 1 n%cmeros:\n",163);
	for (i=0;i<5;i++){
		printf("%d\t",vet1[i]);		
	}
	printf("\n\nVetor 2 n%cmeros:\n",163);
	for (i=0;i<5;i++){
		printf("%d\t",vet2[i]);		
	}
	for (i=0;i<5;i++){
		printf("\n\nSoma elementos [%d]:\n%d + %d = %d\n",i,vet1[i],vet2[i],vet1[i]+vet2[i]);		
	}
	getchar();
	system("pause");
	return 0;
}
