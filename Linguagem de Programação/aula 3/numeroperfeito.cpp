#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int num, div, k;
printf("Digite um numero: \n");
scanf("%i", &num);
while( num > 0){
	div=0;
		for(k=1; k<num; k++){
			if(num % k == 0){
				div+=k;
			}
		}
		if(div == num){
			printf(" \n O numero %i � perfeito", num);
		}else{
			printf(" \n O numero %i n�o � perfeito", num);
		}
		printf("\n Digite um numero: \n");
		scanf("%i", &num);
}
return 0;
}
