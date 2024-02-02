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
		printf("Mês 1: Janeiro");
	break;
	case 2:
		printf("Mês 2: Feveireiro");
	break;
	case 3:
		printf("Mês 3: Março");
	break;
	case 4:
		printf("Mês 4: Abril");
	break;
	case 5:
		printf("Mês 5: Maio");
	break;
	case 6:
		printf("Mês 6: Junho");
	break;
	case 7:
		printf("Mês 7: Julho");
	break;
	case 8:
		printf("Mês 8: Agosto");
	break;
	case 9:
		printf("Mês 9: Setembro");
	break;
	case 10:
		printf("Mês 10: Outubro");
	break;
	case 11:
		printf("Mês 11: Novembro");
	break;
	case 12:
		printf("Mês 12: Dezembro");
	break;
	default:
		printf("Valor Inválido");
}
return 0;
}
