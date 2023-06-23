#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

main(){
	system("cls");
	
	int vet[8],vetmult5[8],vetentre[8];
	int i,soma=0,mult5=0,entre=0,maior=0;
	float med;
	
	for(i=0;i<8;i++){
		printf("Digite o n%cmero %d:",163,i+1);
		scanf("%d",&vet[i]);

		if(vet[i]%5==0){
			mult5++;
		}
		
		if(vet[i]>10&&vet[i]<30){
			entre++;
		}
		
		if(vet[i]>maior){
			maior=vet[i];
		}
		
		soma=soma+vet[i];
	}
	
	med=(float)soma/8;
	
	printf("\nElementos do vetor:\n");
	for(i=0;i<8;i++){
		printf("%d\t",vet[i]);
	}
	
	printf("\n\nM%cdia do vetor:\n%.2f",130,med);
	
	printf("\n\n%d n%cmeros s%co m%cltiplos de 5. Sendo eles:\n",mult5,163,198,163);
	for(i=0;i<8;i++){
		if(vet[i]%5==0){
			vetmult5[i]=vet[i];
			printf("%d\t",vetmult5[i]);
		}
	}
	
	printf("\n\n%d n%cmeros s%co maiores que 10 e menores que 30. Sendo eles:\n",entre,163,198);
	for(i=0;i<8;i++){
		if(vet[i]>10&&vet[i]<30){
			vetentre[i]=vet[i];
			printf("%d\t",vetentre[i]);
		}
	}
	
	printf("\n\nO maior n%cmero do vetor %c:\n%d\n\n",163,130,maior);
	
	getchar();
	system("pause");
	return 0;
}
