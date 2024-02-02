#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float compra, desc, vl_pagar;
	printf("Insira o Valor da Compra");
	scanf("%f", &compra);
	if ( compra <= 30){
		desc=0;
	}else if(compra <=100){
		desc= compra * 0.05;
	}else if( compra <=250){
		desc= compra * 0.10;
	}else{
		desc = compra * 0.15;
	}
	vl_pagar = compra -desc;
	printf("\n Compra: %.2f - desconto: %.2f - valor pagar %.2f", compra, desc, vl_pagar);
	return 0;
}
