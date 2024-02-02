#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, k,div, cont=0,soma_primo, pares=0, num;
	for(i = 1; i < 11; i++){
		printf("Insira um numero \n");
		scanf("%i", &num);
		if(num %2==0){
			pares+=num;		
		}
		if(num < 10){
			cont++;
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
		printf(" \n A Soma dos numeros pares %i", pares);
		printf(" \n A soma dos numeros primos %i", soma_primo);
		printf(" \n A soma dos numeros inferiores a 10", cont);
		
	return 0;
}
	
	
	

