#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>

	main() {
	system("cls");
	
    int primeiro_termo,razao,numero_termos,soma,i,aq,termo_atual;
     
    printf("Primeiro termo:\n");
    scanf("%d",&primeiro_termo);
    printf("Razao:\n");
    scanf("%d",&razao);
    printf("Numero de termos:\n");
    scanf("%d",&numero_termos);
    printf("Termos da PA: ");
    for (i = 0; i < numero_termos; i++) {
        termo_atual = primeiro_termo + i * razao;  // calcula o i-ésimo termo da PA
        printf("%d ", termo_atual);  // imprime o termo atual
    }
    soma=0; aq=primeiro_termo;
     for (i = 0; i < numero_termos; i=i+1) {
        soma=soma+aq; aq=aq+razao;
    }
    printf ("\nSoma dos Termos: %d\n", soma);
   
    system("pause");
}


