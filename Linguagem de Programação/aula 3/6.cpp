#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	float altura, peso;
	for( i=1; i<=10; i++){
		printf(" \n Insira sua idade \n");
		scanf("%i", &idade);
		printf(" \n Insira sua altura \n");
		scanf("%f", &altura);
		printf(" \n Insira seu Peso \n");
		scanf("%f", &peso);
	}
}
