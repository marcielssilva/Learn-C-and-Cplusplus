#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vet[5], i;
	for( i=0;i<5;i++){
		printf("Digite um Termo %i:",i+1);
		scanf("%i", &vet[i]);
	}
	for(i=0;i<5;i++){
		printf("%i ",vet[i]);
	}
	for(i=0;i<5;i++){
		vet[i]=vet[i]*2;
	}
	printf("\n");
	printf("Novos valores do Vetor \n");
	for(i=0;i<5;i++){
		printf("%i  ", vet[i]);
	}
return 0;
}
