#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, som_mult3=0, qtd,  menor, i=0;
	float media=0, par=0, cont=0;
	do{
		printf(" \n Insira um n�mero positivo ou zero \n");
		scanf("%d", &num);
		if(num % 3 == 0){
			som_mult3+=num;
		}
		if( num % 2 == 0){
			par+=num;
			cont++;
		}
		if( i == 0){
			menor=num;
		}
		else if( num < menor){
			menor=num;
		}
		if(num % 5== 0 && num > 50){
			qtd++;
		}
		i++;
	}while (num > 0);
	if(cont > 0){
		media=par/cont;
	}
	printf("\n Soma dos mult de 3: %i", som_mult3);
	printf("\n Media dos pares? %.2f", media);
	printf("\n Menor numero: %i", menor);
	printf("\n Quant de mult de 5 e maiores que 50: %i", qtd);
	
}
