#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, k,div, contmult3, cont3,soma_primo, pares=0, num;
	float media;
	for(i = 0; i < 10; i++){
		printf("Insira um numero \n");
		scanf("%i", &num);
		if(num > 10){
			if(num % 3 ==0){
				contmult3+=num;
				cont3++;
			}
			media = contmult3 / cont3;
		}
		div=0;
		for(k = 1; k <= num; k++){
			if(num % k==0){
				div++;
			}
			if(div == 2){
				soma_primo+=num;
			}
		}
	}
		printf(" \n A soma dos numeros primos %i", soma_primo);
		printf(" \n A media dos numeros multiplos de 3 e maiores que 10: %.2f", media);
		
	return 0;
}
