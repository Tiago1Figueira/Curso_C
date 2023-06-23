#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float idade;
	float me, s, d, h, mi, se;
	
	printf("Programa de conversao de idade\n");
	
	printf("Digite a sua idade\n:");
	scanf("%f", &idade);
	
	me = idade * 12;
	s = idade * 52; 
	d = idade * 365;
	h = idade * 8760;
	mi = idade * 525600;
	se = idade * 31536000;
	
	
	printf("Idade em meses: %.2f \n", me);
	printf("Idade em semanas:  %.2f \n", s);
	printf("Idade em dias:  %.2f \n", d);
	printf("Idade em horas:  %.2f \n", h);
	printf("Idade em minutos:  %.2f \n", mi);
	printf("Idade em segundos:  %.2f \n", se);
	

	
}

