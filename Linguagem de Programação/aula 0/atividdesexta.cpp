#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL, "Portuguese");
 int n1, n2, calc, op1;
 char resp;
 resp = 's';
 while(resp == 's' or resp == 'S'){
 
 	
	 
	printf("Insira um numero \n");
 	scanf("%d", &n1);
 	printf("Insira outro numero \n");
 	scanf("%d", &n2);
 	printf("Qual tipo de operação deseja fazer: 1- adição, 2- subtração, 3- multiplicação, 4- divisão: \n");
 	scanf("%d", &calc);
 	switch(calc){
 		case 1:
 			op1 = n1 + n2;
 				printf("O Resultado é: %d \n", op1);
 		break;
 		case 2:
 			op1 = n1 - n2;
 				printf("O Resultado é: %d \n", op1);
 		break;
 		case 3:
 			op1 = n1 * n2;
 				printf("O Resultado é: %d \n", op1);
 		break;
 		case 4:
 			op1 = n1 / n2;
 				printf("O Resultado é: %d \n", op1);
 		break;
 		default:
 			printf("Operação Inválida");
	 }
		printf("Deseja Continuar ?: s ou n \n");
		scanf("%s", &resp);
}
}
