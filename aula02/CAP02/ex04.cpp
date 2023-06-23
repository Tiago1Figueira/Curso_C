#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	
	float metros;
	float km, hm, dam, m, dc, cm, mm;
	
	printf("Programa de conversao de quilometros em outras medidas\n");
	
	printf("Digite um valor em quilometros\n:");
	scanf("%f", &km);
	
	hm = km * 10 ; 
	dam = hm * 10 ;
	m =  dam * 10 ;
	dc = m * 10  ;
	cm = dc * 10 ;
	mm = cm * 10 ;
		
	printf("km em hectometros: %.2f \n", hm);
	printf("km em decametros:  %.2f \n", dam);
	printf("km em metros:  %.2f \n", m);
	printf("km em decimetros:  %.2f \n", dc);
	printf("km em centimetros:  %.2f \n", cm);
	printf("km em milimetros:  %.2f \n", mm);
		
}

