#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float n1, n2, calc;
	int op;
	printf("Insira um numero: \n");
	scanf("%f", &n1);
	printf("Insira um numero: \n");
	scanf("%f", &n2);
	printf("Escolha a op��o de Calculo: 1 - soma, 2 - subtra��o, 3 - multiplica��o, 4 - divis�o \n ");
	scanf("%d", &op);
	switch (op){
		case 1:
			calc = n1 + n2;
		break;
		case 2:
			calc = n1 - n2;
		break;
		case 3:
			calc = n1 * n2;
		break;
		case 4:
			calc = n1 / n2;
		break;
		default:
			printf("Opera��o Inv�lida"); 
	}
	printf("\n Resultado: %.2f", calc);
	
	
	
	
	
}
