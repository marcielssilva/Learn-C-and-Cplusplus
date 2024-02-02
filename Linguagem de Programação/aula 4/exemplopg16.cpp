#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num_1[5], num_2[5], novo_vet[5], i;
	for(i=0;i<5;i++){
		printf("\n Digite o numero:");
		scanf("%i", &num_1[i]);
	}
	for(i=0;i<5;i++){
		printf("\n Digite o numero:");
		scanf("%i", &num_2[i]);
	}
	for(i=0;i<5;i++){
		novo_vet[i]=num_1[i]+num_2[i];
	}
	printf(" \n Novos valores do vetor \n");
	for(i=0;i<5;i++){
		printf("%i  ", novo_vet[i]);
	}
	return 0;
}
