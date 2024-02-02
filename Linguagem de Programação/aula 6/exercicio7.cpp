#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	
	int vet1[10], vet2[10], i;
	for(i=0;i<10;i++){
		printf("Insira numeros para o vetor 1: \n");
		scanf("%i", &vet1[i]);
		}
		for(i=0;i<10;i++){
			if(vet1[i]<10){
				vet2[i]=0;
			}else{
				vet2[i]=1;
			}
		}
		for(i=0;i<10;i++){
			printf("\n");
			printf("Valor Vetor 1: %i \n", vet1[i]);
			printf("\n");
		}
		for(i=0;i<10;i++){
			printf("\n");
			printf(" Valor Vetor 2:  %i \n", vet2[i]);
			printf("\n");
		}
return 0;
}
