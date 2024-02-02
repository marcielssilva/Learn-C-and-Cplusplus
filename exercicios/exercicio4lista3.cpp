#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int matriz[4][3];
	int i, j, k, somael, somaprimos, maiornum, somag; 
	float media;
	
	somag=0;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
		printf("Insira numeros inteiros \n");
		scanf("%d", &matriz[i][j]);	
		somag+=matriz[i][j];
		}
	}
	for(i=0;i<4;i++){
	for(j=0;j<3;j++){
		if(i == 1){
			somael+= matriz[1][j];
			}
			if(i == 3){
			somael+= matriz[3][j];
			}
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			for(k=0;k<=	matriz[i][j];k++){
				if(k % matriz[i][j] == 0){
					somaprimos+= matriz[i][j];
				}
			}
		}
	}
	maiornum=0;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			if(matriz[i][j]>maiornum){
				maiornum=matriz[i][j];
			}
		}			
	}
	media=somag / 12;
	
	printf(" A soma de todos os numeros da 2 e 4 linha foi: %d\n", somael);
	printf("A Soma de todos os numeros primos foi: %d \n", somaprimos);
	printf("A media dos numeros da matriz foi: %.2f\n", media);
	printf(" O maior numero da matriz foi: %d\n", maiornum);
return 0;
}
