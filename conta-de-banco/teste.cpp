#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, cont_negativo,conta;
	float saldo;
	i = 1;
	cont_negativo=0;
	while (i <= 5){
		printf("Informe o n�mero da conta: \n");
		scanf("%d \n", &conta);
		printf("Informe o Saldo:");
		scanf("%f \n", &saldo);
		if (saldo < 0){
			printf("Seu saldo est� negativo \n");
			cont_negativo = cont_negativo + 1;
		}else{
			printf("Seu saldo est� Positivo \n");	
		}
		i = i + 1;
		}
		
		
		
	}	

