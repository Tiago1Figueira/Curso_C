#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int soma = 0, num;
int main(){
	while(soma < 20){
		printf("Digite um numero:");
		scanf("%d", &num);
		soma += num;
	}
	printf("A soma dos numeros digitados e %d\n", soma);
	
	return 0;
}
