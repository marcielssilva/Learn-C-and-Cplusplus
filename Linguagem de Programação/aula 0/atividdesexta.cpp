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
 	printf("Qual tipo de opera��o deseja fazer: 1- adi��o, 2- subtra��o, 3- multiplica��o, 4- divis�o: \n");
 	scanf("%d", &calc);
 	switch(calc){
 		case 1:
 			op1 = n1 + n2;
 				printf("O Resultado �: %d \n", op1);
 		break;
 		case 2:
 			op1 = n1 - n2;
 				printf("O Resultado �: %d \n", op1);
 		break;
 		case 3:
 			op1 = n1 * n2;
 				printf("O Resultado �: %d \n", op1);
 		break;
 		case 4:
 			op1 = n1 / n2;
 				printf("O Resultado �: %d \n", op1);
 		break;
 		default:
 			printf("Opera��o Inv�lida");
	 }
		printf("Deseja Continuar ?: s ou n \n");
		scanf("%s", &resp);
}
}
