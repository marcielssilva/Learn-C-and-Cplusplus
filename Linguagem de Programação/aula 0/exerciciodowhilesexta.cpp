#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float saldo, calc, valor;
	int resp;
	
	do{
		printf("Bem vindo ao Banco zeromony");
		printf("Por favor insira seu saldo anterior? \n");
		scanf("%f", &saldo);
		printf("Qual operação deseja fazer: 1-Saque, 2-Deposíto, 3-Pagamento em Cheque, 0-Finalizar \n");
		scanf("%d", &resp);
	switch(resp){
		case 1:
			printf("Qual valor deseja sacar? \n");
			scanf("%f", &valor);
			saldo = saldo - valor;
		break;
		case 2:
			printf("Qual o Valor do Deposito que deseja fazer? \n");
			scanf("%2.f", &valor);
			saldo = saldo + valor;
		break;
		case 3:
			printf("Qual o valor do pagamento em cheque que deseja fazer %f \n");
			scanf("%2.f", &valor);
			saldo = saldo + valor;
		break;
		case 0:
			printf("Operação Finalizada");
			saldo = 0;
		break;
	}
}while(saldo <= 0);
			printf("Seu saldo está negativado ou zerado %2.f", saldo);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
