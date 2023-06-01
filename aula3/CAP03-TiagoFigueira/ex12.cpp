#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

main(){

	start:
	system("cls");
	int v1,v2,v3,v4,v5,p1,p2,p3,p4,p5,somav,somap,escolha;
//soreteio inicial 2 números para VC e 2 números para PC de 1 a 10:
	
	srand(time(NULL));
	v1= 1+(rand()%10);
	sorteio1:
	v2= 1+(rand()%10);
	p1= 1+(rand()%10);
	sorteio2:
	p2= 1+(rand()%10);
	
	if(v1==v2){
		goto sorteio1; //se v1 for igual a v2 vai sortear um novo número para v2.
	}
	else
	if(p1==p2){
		goto sorteio2; //se p1 for igual a p2 vai sortear um novo número para p2.
	}
	else
	somav=v1+v2;
	somap=p1+p2;
    
	printf("\nPrograma 21 \n");
	printf("VC = %d + %d = %d \n",v1,v2,somav);
	printf("PC = X + X = X \n");
	printf("Deseja sortear mais um numero?\nDigite (1-Sim / 2-Nao)\n");
	scanf ("%d", &escolha);
	system("cls");
//caso VC escolha mais um número sorteará o v3 e p3:
	if(escolha==1){
		sorteio3:
		v3=1+(rand()%10);
		sorteio4:
		p3=1+(rand()%10);
		if(v3==v1||v3==v2){
			goto sorteio3;
		}
		else
		if(p3==p1||p3==p2){
			goto sorteio4;
		}
		else
		somav=v1+v2+v3;
		somap=p1+p2+p3;
		//Resultados Automáticos com 3 números (6 possibilidades):
		//1-VC igual a 21 e PC não.
		if(somav==21 && somap!=21){
			printf("\nPrograma 21 \n");
			printf("VC = %d + %d + %d = %d \n",v1,v2,v3,somav);
			printf("PC = %d + %d + %d = %d \n",p1,p2,p3,somap);
			printf("VC ganhou!!!\n");
			printf("VC igual a 21 e PC nao!!!\n\n");
			printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
			scanf ("%d", &escolha);	
			if (escolha==1){
				goto start;
			}
			else
			if(escolha==2){
				goto fim;
			}
		}
		else
		//2-PC igual a 21 e VC não.
		if (somap==21 && somav!=21){
			printf("\nPrograma 21 \n");
			printf("VC = %d + %d + %d = %d \n",v1,v2,v3,somav);
			printf("PC = %d + %d + %d = %d \n",p1,p2,p3,somap);
			printf("PC ganhou!!!\n");
			printf("PC igual a 21 e VC nao!!!\n\n");
			printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
			scanf ("%d", &escolha);	
			if (escolha==1){
				goto start;
			}
			else
			if(escolha==2){
				goto fim;
			}
		}
		else
		//3-PC estourou e VC não
		if (somap>21 && somav<21){
			printf("\nPrograma 21 \n");
			printf("VC = %d + %d + %d = %d \n",v1,v2,v3,somav);
			printf("PC = %d + %d + %d = %d \n",p1,p2,p3,somap);
			printf("VC ganhou!!!\n");
			printf("PC estourou e VC nao!!!\n\n");
			printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
			scanf ("%d", &escolha);	
			if (escolha==1){
				goto start;
			}
			else
			if(escolha==2){
				goto fim;
			}
		}
		else
		//4-VC estourou e PC não
		if (somav>21 && somap<21){
			printf("\nPrograma 21 \n");
			printf("VC = %d + %d + %d = %d \n",v1,v2,v3,somav);
			printf("PC = %d + %d + %d = %d \n",p1,p2,p3,somap);
			printf("PC ganhou!!!\n");
			printf("VC estourou!!!\n\n");
			printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
			scanf ("%d", &escolha);	
			if (escolha==1){
				goto start;
			}
			else
			if(escolha==2){
				goto fim;
			}
		}
		else
		//5-PC e VC estouraram
		if (somap>21 && somav>21){
			printf("\nPrograma 21 \n");
			printf("VC = %d + %d + %d = %d \n",v1,v2,v3,somav);
			printf("PC = %d + %d + %d = %d \n",p1,p2,p3,somap);
			printf("Empate!!!\n");
			printf("PC e VC estouraram!!!\n\n");
			printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
			scanf ("%d", &escolha);	
			if (escolha==1){
				goto start;
			}
			else
			if(escolha==2){
				goto fim;
			}
		}
		else
		//6-VC e PC fizeram 21.
		if (somap==21 && somav==21){
			printf("\nPrograma 21 \n");
			printf("VC = %d + %d + %d = %d \n",v1,v2,v3,somav);
			printf("PC = %d + %d + %d = %d \n",p1,p2,p3,somap);
			printf("Empate!!!\n");
			printf("PC e VC são iguais a 21!!!\n\n");
			printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
			scanf ("%d", &escolha);	
			if (escolha==1){
				goto start;
			}
			else
			if(escolha==2){
				goto fim;
			}
		}
		else
		//Caso não tenha resultado automático:
		printf("\nPrograma 21 \n");
		printf("VC = %d + %d + %d = %d \n",v1,v2,v3,somav);
		printf("PC = X + X + X = X \n");
		printf("Deseja sortear mais um numero?\nDigite (1-Sim / 2-Nao)\n");
		scanf ("%d", &escolha);
		system("cls");
		//Caso VC pare com 3 números (3 possibilidades):
		if(escolha==2){
			//1-VC maior que PC
			if(somav>somap){
				printf("\nPrograma 21 \n");
				printf("VC = %d + %d + %d = %d \n",v1,v2,v3,somav);
				printf("PC = %d + %d + %d = %d \n", p1,p2,p3,somap);
				printf("VC ganhou!!!\n");
				printf("VC maior que PC!!!\n\n");
				printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
				scanf ("%d", &escolha);
				if(escolha==1){
					goto start;
				}
				else 
				if(escolha==2){
					goto fim;
				}
			}
			else
			//2-PC maior que VC
			if(somav<somap){
				printf("\nPrograma 21 \n");
				printf("VC = %d + %d + %d = %d \n",v1,v2,v3,somav);
				printf("PC = %d + %d + %d = %d \n", p1,p2,p3,somap);
				printf("PC ganhou!!!\n");
				printf("PC maior que VC!!!\n\n");
				printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
				scanf ("%d", &escolha);
				if(escolha==1){
					goto start;
				}
				else 
				if(escolha==2){
					goto fim;
				}
			}
			else
			//3-VC igual a PC
			if(somav==somap){
				printf("\nPrograma 21 \n");
				printf("VC = %d + %d + %d = %d \n",v1,v2,v3,somav);
				printf("PC = %d + %d + %d = %d \n", p1,p2,p3,somap);
				printf("Empate!!!\n");
				printf("VC igual a PC!!!\n\n");
				printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
				scanf ("%d", &escolha);
				if(escolha==1){
					goto start;
				}
				else 
				if(escolha==2){
					goto fim;
				}
			}
		}
		else
		//Se VC decidir pegar um quarto número:
		if(escolha==1){
			sorteio5:
			v4=1+(rand()%10);
			sorteio6:
			p4=1+(rand()%10);
			if(v4==v1||v4==v2||v4==v3){
				goto sorteio5;
			}
			else
			if(p4==p1||p4==p2|| p4==p3){
				goto sorteio6;
			}
			else
			somav=v1+v2+v3+v4;
			somap=p1+p2+p3+p4;
		//Resultados Automáticos com 4 números (6 possibilidades):
		//1-VC igual a 21 e PC não.
			if(somav==21 && somap!=21){
				printf("\nPrograma 21 \n");
				printf("VC = %d + %d + %d + %d = %d \n",v1,v2,v3,v4,somav);
				printf("PC = %d + %d + %d + %d = %d \n",p1,p2,p3,p4,somap);
				printf("VC ganhou!!!\n");
				printf("VC igual a 21 e PC nao!!!\n\n");
				printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
				scanf ("%d", &escolha);	
				if (escolha==1){
					goto start;
				}
				else
				if(escolha==2){
					goto fim;
				}
			}
			else
			//2-PC igual a 21 e VC não.
			if (somap==21 && somav!=21){
				printf("\nPrograma 21 \n");
				printf("VC = %d + %d + %d = %d \n",v1,v2,v3,v4,somav);
				printf("PC = %d + %d + %d = %d \n",p1,p2,p3,p4,somap);
				printf("PC ganhou!!!\n");
				printf("PC igual a 21 e VC nao!!!\n\n");
				printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
				scanf ("%d", &escolha);	
				if (escolha==1){
					goto start;
				}
				else
				if(escolha==2){
					goto fim;
				}
			}
			else
			//3-PC estourou e VC não
			if (somap>21 && somav<21){
				printf("\nPrograma 21 \n");
				printf("VC = %d + %d + %d + %d = %d \n",v1,v2,v3,v4,somav);
				printf("PC = %d + %d + %d + %d = %d \n",p1,p2,p3,p4,somap);
				printf("VC ganhou!!!\n");
				printf("PC estourou e VC nao!!!\n\n");
				printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
				scanf ("%d", &escolha);	
				if (escolha==1){
					goto start;
				}
				else
				if(escolha==2){
					goto fim;
				}
			}
			else
			//4-VC estourou e PC não
			if (somav>21 && somap<21){
				printf("\nPrograma 21 \n");
				printf("VC = %d + %d + %d + %d = %d \n",v1,v2,v3,v4,somav);
				printf("PC = %d + %d + %d + %d = %d \n",p1,p2,p3,p4,somap);
				printf("PC ganhou!!!\n");
				printf("VC estourou!!!\n\n");
				printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
				scanf ("%d", &escolha);	
				if (escolha==1){
					goto start;
				}
				else
				if(escolha==2){
					goto fim;
				}
			}
			else
			//5-PC e VC estouraram
			if (somap>21 && somav>21){
				printf("\nPrograma 21 \n");
				printf("VC = %d + %d + %d + %d = %d \n",v1,v2,v3,v4,somav);
				printf("PC = %d + %d + %d + %d = %d \n",p1,p2,p3,p4,somap);
				printf("Empate!!!\n");
				printf("PC e VC estouraram!!!\n\n");
				printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
				scanf ("%d", &escolha);	
				if (escolha==1){
					goto start;
				}
				else
				if(escolha==2){
					goto fim;
				}
			}
			else
			//6-VC e PC fizeram 21.
			if (somap==21 && somav==21){
				printf("\nPrograma 21 \n");
				printf("VC = %d + %d + %d + %d = %d \n",v1,v2,v3,v4,somav);
				printf("PC = %d + %d + %d + %d = %d \n",p1,p2,p3,p4,somap);
				printf("Empate!!!\n");
				printf("PC e VC são iguais a 21!!!\n\n");
				printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
				scanf ("%d", &escolha);	
				if (escolha==1){
					goto start;
				}
				else
				if(escolha==2){
					goto fim;
				}
			}
			else
			//Caso não tenha resultado automático:
			printf("\nPrograma 21 \n");
			printf("VC = %d + %d + %d + %d = %d \n",v1,v2,v3,v4,somav);
			printf("PC = X + X + X + X = X \n");
			printf("Deseja sortear mais um numero?\nDigite (1-Sim / 2-Nao)\n");
			scanf ("%d", &escolha);
			system("cls");
			//Caso VC pare com 4 números (3 possibilidades):
			if(escolha==2){
			//1-VC maior que PC
				if(somav>somap){
					printf("\nPrograma 21 \n");
					printf("VC = %d + %d + %d + %d = %d \n",v1,v2,v3,v4,somav);
					printf("PC = %d + %d + %d + %d = %d \n",p1,p2,p3,p4,somap);
					printf("VC ganhou!!!\n");
					printf("VC maior que PC!!!\n\n");
					printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
					scanf ("%d", &escolha);
					if(escolha==1){
						goto start;
					}
					else 
					if(escolha==2){
						goto fim;
					}
				}
				else
				//2-PC maior que VC
				if(somav<somap){
					printf("\nPrograma 21 \n");
					printf("VC = %d + %d + %d + %d = %d \n",v1,v2,v3,v4,somav);
					printf("PC = %d + %d + %d + %d = %d \n",p1,p2,p3,p4,somap);
					printf("PC ganhou!!!\n");
					printf("PC maior que VC!!!\n\n");
					printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
					scanf ("%d", &escolha);
					if(escolha==1){
						goto start;
					}
					else 
					if(escolha==2){
						goto fim;
					}
				}
				else
				//3-VC igual a PC
				if(somav==somap){
					printf("\nPrograma 21 \n");
					printf("VC = %d + %d + %d + %d = %d \n",v1,v2,v3,v4,somav);
					printf("PC = %d + %d + %d + %d = %d \n",p1,p2,p3,p4,somap);
					printf("Empate!!!\n");
					printf("VC igual a PC!!!\n\n");
					printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
					scanf ("%d", &escolha);
					if(escolha==1){
						goto start;
					}
					else 
					if(escolha==2){
						goto fim;
					}
				}
			}
			else
			if(escolha==1){
				//ultimo nível sortear o 5° número	
				sorteio7:
				v5=1+(rand()%10);
				sorteio8:
				p5=1+(rand()%10);
				if (v5==v1||v5==v2||v5==v3||v5==v4){
					goto sorteio7;
				}
				else
				if (p5==p1||p5==p2||p5==p3||p5==p4){
					goto sorteio8;
				}
				else
				somav=v1+v2+v3+v4+v5;
				somap=p1+p2+p3+p4+p5;
				//Resultados Automáticos com 5 números (6 possibilidades):
				//1-VC igual a 21 e PC não.
				if(somav==21 && somap!=21){
				printf("\nPrograma 21 \n");
				printf("VC = %d + %d + %d + %d + %d = %d \n",v1,v2,v3,v4,v5,somav);
				printf("PC = %d + %d + %d + %d + %d = %d \n",p1,p2,p3,p4,p5,somap);
				printf("VC ganhou!!!\n");
				printf("VC igual a 21 e PC nao!!!\n\n");
				printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
				scanf ("%d", &escolha);	
				if (escolha==1){
					goto start;
				}
				else
				if(escolha==2){
					goto fim;
				}
				}
				else
				//2-PC igual a 21 e VC não.
				if (somap==21 && somav!=21){
					printf("\nPrograma 21 \n");
					printf("VC = %d + %d + %d + %d + %d = %d \n",v1,v2,v3,v4,v5,somav);
					printf("PC = %d + %d + %d + %d + %d = %d \n",p1,p2,p3,p4,p5,somap);
					printf("PC ganhou!!!\n");
					printf("PC igual a 21 e VC nao!!!\n\n");
					printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
					scanf ("%d", &escolha);	
					if (escolha==1){
						goto start;
					}
					else
					if(escolha==2){
						goto fim;
					}
				}
				else
				//3-PC estourou e VC não
				if (somap>21 && somav<21){
					printf("\nPrograma 21 \n");
					printf("VC = %d + %d + %d + %d + %d = %d \n",v1,v2,v3,v4,v5,somav);
					printf("PC = %d + %d + %d + %d + %d = %d \n",p1,p2,p3,p4,p5,somap);
					printf("VC ganhou!!!\n");
					printf("PC estourou e VC nao!!!\n\n");
					printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
					scanf ("%d", &escolha);	
					if (escolha==1){
						goto start;
					}
					else
					if(escolha==2){
						goto fim;
					}
				}
				else
				//4-VC estourou e PC não
				if (somav>21 && somap<21){
					printf("\nPrograma 21 \n");
					printf("VC = %d + %d + %d + %d + %d = %d \n",v1,v2,v3,v4,v5,somav);
					printf("PC = %d + %d + %d + %d + %d = %d \n",p1,p2,p3,p4,p5,somap);
					printf("PC ganhou!!!\n");
					printf("VC estourou!!!\n\n");
					printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
					scanf ("%d", &escolha);	
					if (escolha==1){
						goto start;
					}
					else
					if(escolha==2){
						goto fim;
					}
				}
				else
				//5-PC e VC estouraram
				if (somap>21 && somav>21){
					printf("\nPrograma 21 \n");
					printf("VC = %d + %d + %d + %d + %d = %d \n",v1,v2,v3,v4,v5,somav);
					printf("PC = %d + %d + %d + %d + %d = %d \n",p1,p2,p3,p4,p5,somap);
					printf("Empate!!!\n");
					printf("PC e VC estouraram!!!\n\n");
					printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
					scanf ("%d", &escolha);	
					if (escolha==1){
						goto start;
					}
					else
					if(escolha==2){
						goto fim;
					}
				}
				else
				//6-VC e PC fizeram 21.
				if (somap==21 && somav==21){
					printf("\nPrograma 21 \n");
					printf("VC = %d + %d + %d + %d + %d = %d \n",v1,v2,v3,v4,v5,somav);
					printf("PC = %d + %d + %d + %d + %d = %d \n",p1,p2,p3,p4,p5,somap);
					printf("Empate!!!\n");
					printf("PC e VC são iguais a 21!!!\n\n");
					printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
					scanf ("%d", &escolha);	
					if (escolha==1){
						goto start;
					}
					else
					if(escolha==2){
						goto fim;
					}
				}
				else
				//Caso não tenha resultado automático:
				printf("\nPrograma 21 \n");
				printf("VC = %d + %d + %d + %d + %d = %d \n",v1,v2,v3,v4,v5,somav);
				printf("PC = X + X + X + X + X = X \n");
				printf("Aperte ENTER para ver o resultado:\n");
				getch();
				system("cls");
				//Caso VC pare com 5 números (3 possibilidades):
				//1-VC maior que PC
					if(somav>somap){
						printf("\nPrograma 21 \n");
						printf("VC = %d + %d + %d + %d + %d = %d \n",v1,v2,v3,v4,v5,somav);
						printf("PC = %d + %d + %d + %d + %d = %d \n",p1,p2,p3,p4,p5,somap);
						printf("VC ganhou!!!\n");
						printf("VC maior que PC!!!\n\n");
						printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
						scanf ("%d", &escolha);
						if(escolha==1){
							goto start;
						}
						else 
						if(escolha==2){
							goto fim;
						}
					}
					else
					//2-PC maior que VC
					if(somav<somap){
						printf("\nPrograma 21 \n");
						printf("VC = %d + %d + %d + %d + %d = %d \n",v1,v2,v3,v4,v5,somav);
						printf("PC = %d + %d + %d + %d + %d = %d \n",p1,p2,p3,p4,p5,somap);
						printf("PC ganhou!!!\n");
						printf("PC maior que VC!!!\n\n");
						printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
						scanf ("%d", &escolha);
						if(escolha==1){
							goto start;
						}
						else 
						if(escolha==2){
							goto fim;
						}
					}
					else
					//3-VC igual a PC
					if(somav==somap){
						printf("\nPrograma 21 \n");
						printf("VC = %d + %d + %d + %d + %d = %d \n",v1,v2,v3,v4,v5,somav);
						printf("PC = %d + %d + %d + %d + %d = %d \n",p1,p2,p3,p4,p5,somap);
						printf("Empate!!!\n");
						printf("VC igual a PC!!!\n\n");
						printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
						scanf ("%d", &escolha);
						if(escolha==1){
							goto start;
						}
						else 
						if(escolha==2){
							goto fim;
						}
					}
			}
		
		}	
			
	}	
	else
	
	
//Caso VC pare no início com 2 números:
	if(escolha==2 && somav>somap){
		printf("\nPrograma 21 \n");
		printf("VC = %d + %d = %d \n",v1,v2,somav);
		printf("PC = %d + %d = %d \n", p1,p2,somap);
		printf("VC ganhou!!!\n");
		printf("VC maior que PC!!!\n\n");
		printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
		scanf ("%d", &escolha);
		if(escolha==1){
			goto start;
		}
		else 
		if(escolha==2){
			goto fim;
		}
	}
	else
	if(escolha==2 && somav<somap){
		printf("\nPrograma 21 \n");
		printf("VC = %d + %d = %d \n",v1,v2,somav);
		printf("PC = %d + %d = %d \n", p1,p2,somap);
		printf("PC ganhou!!!\n");
		printf("PC maior que VC!!!\n\n");
		printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
		scanf ("%d", &escolha);
		if(escolha==1){
			goto start;
		}
		else 
		if(escolha==2){
			goto fim;
		}
	}
	else
	//VC igual a PC
	if(escolha==2 && somav==somap){
		printf("\nPrograma 21 \n");
		printf("VC = %d + %d = %d \n",v1,v2,somav);
		printf("PC = %d + %d = %d \n", p1,p2,somap);
		printf("Empate!!!\n");
		printf("VC igual a PC!!!\n\n");
		printf("Deseja jogar novamente?\nDigite (1-Sim / 2-Nao)\n");
		scanf ("%d", &escolha);
		if(escolha==1){
			goto start;
		}
		else 
		if(escolha==2){
			goto fim;
		}
	}
	fim:
	system("pause");
	
}
