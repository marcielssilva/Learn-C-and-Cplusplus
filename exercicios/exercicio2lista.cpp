#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, k,div,cont20, mais20, cont=0, pares, contpar=0, contimpar, menor, num;
	float media;
	for(i = 1; i < 11; i++){
		printf("Insira um numero \n");
		scanf("%i", &num);
		if(num > 10){
			num % 2 == 0;
			pares+=num;
		}
		if(num % 2 ==0){
			contpar++;
		}
		else{
			contimpar++;
		}
		if(i==1){
			menor=num;
		}else if(num<menor){
			menor=num;
		}
		if(num > 20){
			cont20++;
			mais20+=num;
			media = mais20 / cont20;
		}
	}
		printf(" \n O menor numero foi: %d \n", menor);
		printf(" \n A soma dos pares maiores que 10 foi : %d \n", pares);
		printf(" \n A Quantidade de numeros Ímpares: %d \n", contimpar);
		printf(" \n A media dos numeros maiores que 20: %2.f",media );
		
return 0;
}
