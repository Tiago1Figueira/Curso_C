#include <windows.h>
#include <stdio.h>

main(){
	system("cls");
/*Preencher um vetor com os números pares do número 2 a 20. Preencher um vetor com os 
números de 10 a 19. Somar os vetores acima. */
	int vet1[10],vet2[10],soma[10],i,total=0,soma1=0,soma2=0;
	printf("vetor1:\n\n");
	for(i=0;i<10;i++){
		vet1[i]=(i+1)*2;
		printf("[%d] ",vet1[i]);
	}
	printf("\n\nvetor2:\n\n");	
	for(i=0;i<10;i++){
		vet2[i]=i+10;
		printf("[%d] ",vet2[i]);
	}
		printf("\n\nSoma entre os elementos dos vetores:\n\n");
	for(i=0;i<10;i++){
		soma[i]=vet1[i]+vet2[i];
		soma1=soma1+vet1[i];
		soma2=soma2+vet2[i];
		total=total+soma[i];
		printf("Soma [%d] + [%d] = %d\n",vet1[i],vet2[i],soma[i]);
	}
	
	printf("\n\nSoma de todos os elementos do vetor1 = %d",soma1);
	printf("\n\nSoma de todos os elementos do vetor2 = %d",soma2);
	printf("\n\nSoma total de todos os elementos dos vetores = %d",total);
	
	getchar();
	system("pause");
	return 0;
}
