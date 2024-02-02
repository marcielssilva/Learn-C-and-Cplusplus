#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num[10], qtd,qtd_primo,qtdn, i, k, div;
	for(i=0;i<5;i++){
	printf("Insira 5 numeros \n");
	scanf("%i", &num[i]);
	}
	for(i=0;i<10;i++){
	for(k = 1; k <=num[i]; k++){
		if(num[i] % k==0){
			div++;
		}
		if(div == 2){
			qtd_primo++;
		}
		if(num[i] > 10 && num[i] % 5 == 0){
			qtdn+=num[i];
		}
	if(num[i] >= 50 && num[i] <= 100){
		qtd++;
	}
	}
	}
	printf("\n Quantidade de primos: %i", qtd_primo);
	printf("\n Soma dos números mai8ores que 10 e multiplo de 5: %i", qtdn);
	printf("\n Quantidade de numeros maiores ou iguais a 50 e menores ou iguais a 100: %i", qtd);
	
}
