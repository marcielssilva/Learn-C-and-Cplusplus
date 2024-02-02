#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int vetA[10], i, k, aux;
	float vetB[10];
	for(i=0;i<10;i++){
		printf(" Insira um número: \n");
		scanf("%i", &vetA[i]);
		vetB[i]=vetA[i]/2,0;
	}
	for(i=0;i<10;i++){
		for(k=i;k<10;k++){
			if(vetA[i]<vetA[k]){
				aux=vetA[i];
				vetA[i]=vetA[k];
				vetA[k]=aux;
			}
		}		
		for(k=i;k<10;k++){
			if(vetB[i]>vetB[k]){
				aux=vetB[i];
				vetB[i]=vetB[k];
				vetB[k]=aux;
		}
	}

	printf("\n Ordem Decrescente do Vetor A: %i \n", vetA[i]);
	printf("\n Ordem Crescente do Vetor B: %.2f \n", vetB[i]);
}
}

