#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	system("cls");
	/*Preencher um vetor de 8 elementos inteiros. Mostrar o vetor e informar quantos n�meros 
	s�o maior que 30, Somar estes n�meros. Somar todos os n�meros. */
	
	int vet[8],i,total=0,soma=0, vet30=0;
	
	for(i=0;i<8;i++){
		printf("Digite o n%cmero %d:",163,i+1);	
		scanf("%d",&vet[i]);
		total=total+vet[i];
		if(vet[i]>30){
			soma=soma+vet[i]; //fazer uma soma apenas se o n�mero for maior que 30.
			vet30++;
		}
	}
	printf("Existem %d n%cmeros maiores que 30\n",vet30,163);
	printf("Soma dos n%cmeros maiores que 30 = %d\n",163,soma);
	printf("Soma de todos os n%cmeros = %d\n",163,total);
	
	system("pause");
	getchar();
	return 0;
}
