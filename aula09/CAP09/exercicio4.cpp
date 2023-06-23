#include <stdio.h>
#include <locale.h>
#include <windows.h>
main() {
	system("cls");
	setlocale(LC_ALL,"Portuguese");
	
    int valor1 = 10;
    int valor2 = 20;
    
    int *Pvalor1 = &valor1;
    int *Pvalor2 = &valor2;
    
    printf("Valor1: %d\n", valor1);
    printf("Endereço de Valor1: %d \n\n", Pvalor1);
    printf("Valor2: %d\n", valor2);
    printf("Endereço de Valor2: %d\n\n\n", &valor2);
    
    printf("Ponteiro1: %d\n", Pvalor1);
    printf("Conteúdo de Ponteiro1: %d\n\n", *Pvalor1);
    printf("Ponteiro2: %d\n", Pvalor2);
    printf("Conteúdo de Ponteiro2: %d\n", *Pvalor2);
    
    system ("pause");
    return 0;
   
}
