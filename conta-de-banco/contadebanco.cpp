#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	int i, cont_negativo,conta;
	float saldo;
	setlocale(LC_ALL, "Portuguese");
	i = 1;
	cont_negativo = 0;
	while (i <= 5){
		printf("Informe o número da conta: \n");
		scanf("%d \n", &conta);
		printf("Informe o Saldo:");
		scanf("%f \n", &saldo);
		if (saldo >= 0){
			printf("Seu saldo está positivo \n");
		}else{
			printf("Seu saldo está negativo \n");
			cont_negativo = cont_negativo + 1;	
		}
		i = i + 1;
		}	
	printf("Total de contas negativas %d \n", cont_negativo);
		
	}	

