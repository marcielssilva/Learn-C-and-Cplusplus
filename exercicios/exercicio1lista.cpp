#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num, i;
	
	printf("Insira um numero de 1 a 12 \n");
	scanf("%i", &num);
	switch(num){
	case 1:
		printf("M�s 1: Janeiro");
	break;
	case 2:
		printf("M�s 2: Feveireiro");
	break;
	case 3:
		printf("M�s 3: Mar�o");
	break;
	case 4:
		printf("M�s 4: Abril");
	break;
	case 5:
		printf("M�s 5: Maio");
	break;
	case 6:
		printf("M�s 6: Junho");
	break;
	case 7:
		printf("M�s 7: Julho");
	break;
	case 8:
		printf("M�s 8: Agosto");
	break;
	case 9:
		printf("M�s 9: Setembro");
	break;
	case 10:
		printf("M�s 10: Outubro");
	break;
	case 11:
		printf("M�s 11: Novembro");
	break;
	case 12:
		printf("M�s 12: Dezembro");
	break;
	default:
		printf("Valor Inv�lido");
}
return 0;
}
