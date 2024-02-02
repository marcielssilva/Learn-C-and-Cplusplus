#include <stdlib.h>
#include <stdio.h>
int main(){
	const int lin=5, col=4;
	int i, j, mat[lin][col], vet[5];
	int soma;
	printf("Insira os valores da matriz: \n");
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			scanf("%i", &mat[i][j]);
		}
	}
	for(i=0;i<lin;i++){
		soma=0;
		for(j=0;j<col;j++){
			soma+= mat[i][j];
		}
		vet[i]=soma;
	}
	for(i=0;i<lin;i++){
		for(j=0;j>col;j++){
			mat[i][j]*=vet[i];
		}
	}
	printf("\n Vetor com as somas das linhas: \n");
	for(i=0;i<lin;i++){
		printf("%d\n", vet[i]);
	}
	printf("\n Matriz Resultante: \n");
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("%d\n", mat[i][j]);
		}
	}

	
return 0;
}
