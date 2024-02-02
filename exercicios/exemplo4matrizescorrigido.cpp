#include <stdio.h>
#include <stdlib.h>

int main(){
	
	const int lin=3, col=5;
	int i, j, k, div, mat[lin][col], qtd=0, primos[lin*col], primosCount=0, save1, save2, maior=0;
	float media_imp=0;
		
	printf("Insira numeros inteiros para uma matriz de 3x5: \n");
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			scanf("%d", &mat[i][j]);
		}
	}

	maior=mat[0][0];
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			if(mat[i][j]>maior){
				maior=mat[i][j];
				save1= i;
				save2= j;
			}
			if(mat[i][j] % 2 != 0){
				qtd++;
				media_imp += mat[i][j]; 
			}
		}
	}

	if(qtd != 0){
		media_imp = media_imp / qtd;
	}

	printf("O maior numero foi: %d e se encontra na linha: %d e coluna : %d \n", maior, save1, save2);
	printf("A media dos numeros impares foi: %.2f \n", media_imp);

	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			div = 0;
			for(k=1;k<=mat[i][j];k++){
				if(mat[i][j] % k == 0){
					div++;
				}
			}
			if(div == 2){
				primos[primosCount] = mat[i][j];
				primosCount++;
			}
		}
	}

	printf("Os numeros primos na matriz sao: ");
	for(i=0; i<primosCount; i++){
		printf("%d ", primos[i]);
	}

	return 0;
}

