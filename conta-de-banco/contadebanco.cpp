#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO INT MAIN OU A ESTRUTURA BASE DE TODO O CODIGO // 

int main()
{
	
// DECLARAÇÃO DE VARIAVEIS E DATATYPES DELAS : ' INT, FLOAT , DOUBLE , CHAR , STRING ' //
	
	int i, cont_negativo,conta;
	float saldo;

 // UTILIZADA PARA PODER UTILIZAR CARACTERES DA UTF - 8 // 

	
	setlocale(LC_ALL, "Portuguese");

// ATRIBUI VALOR AS VAR: ' i ' e 'cont_negativo' //
	
	i = 1;
	cont_negativo = 0;

// inicio do WHILE : ENQUANTO ' i ' for menor ou igual a 5 // 
	while (i <= 5){
		printf("Informe o número da conta: \n");
		scanf("%d \n", &conta);
		printf("Informe o Saldo:");
		scanf("%f \n", &saldo);

// SE O SALDO FOR MAIOR OU IGUAL A ZERO : EXIBIRA NA TELA UM PRINT INFORMANDO QUE ELE POSITIVO // 
		if (saldo >= 0){
			printf("Seu saldo está positivo \n");

// SE NAO FOR MAIOR OU IGUAL A ZERO: EXIBIRA UM PRINT INFORMANDO O SALDO NEGATIVO //

			
		}else{
			printf("Seu saldo está negativo \n");
	// CONTADOR NEGATIVO +1 
			cont_negativo = cont_negativo + 1;	
		}
		i = i + 1;
		}	

	// PRINTA A QUANTIDADE TOTAL DE CONTAS NEGATIVADAS 
	printf("Total de contas negativas %d \n", cont_negativo);
		
	}	

