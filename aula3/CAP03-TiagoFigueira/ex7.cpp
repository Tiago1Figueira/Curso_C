#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){
	
	float num1, num2, soma;
	
	printf("SOMA DOIS NUMERO E SENDO MAIOR QUE 10 IMPRIME O RESULTADO!\n\n");
	
	printf("Insira o primeiro numero:\n");
	scanf("%f", &num1);
	
	printf("Insira o segundo numero:\n");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	if (soma > 10){
		printf("A soma dos dois numeros e %.2f!", soma);
	}
	else{
		printf("Nao e possivel exibir o numero!");
		}
	
	}

