#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, mult, i, k, fat;
	for(i=1; i<=5; i++){
		printf("Insira um Numero \n");
		scanf("%d", &num);
		for(k=1; k<num; k++){
		 mult=num*k;
		 fat=mult*num-k;
		}
		printf(" \n O numero digitado foi %d", num);
		printf ("\n O numero fatorado foi %d", fat);
	}
	return 0;
}

