#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[4][6];
	int qtd, i, j;
	int somapar=0, somacol=0, soma=0;
	float medialin;
	printf("Insira um numero \n");
	for(i=0;i<4;i++){
		for(j=0;j<6;j++){
		scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<6;j++){
			if(matriz[i][j] >= 10 && matriz[i][j] <= 30){
				qtd++;
			}
			if(matriz[i][j] > 10 && matriz[i][j] % 2 == 0){
				somapar+=matriz[i][j];
			}
			if(j == 3){
				somacol+=matriz[i][j];
			}
			if(i == 2){
					soma+=matriz[i][j];
					medialin=soma / 6;	
			}	
		}
	}
		printf("A quantidade de numeros entre 10 e 30 foi: %d\n", qtd);
		printf("A soma dos numeros maiores que 10 e multiplos de 2 foi: %d\n", somapar);
		printf("A soma dos numeros da 4 coluna da matriz foi: %d\n", somacol);
		printf(" A media dos numeros da linha 3 foi: %.2f\n", medialin);

return 0;
}
