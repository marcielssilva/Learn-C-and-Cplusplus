#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){	
	char nomes[5][50], produto_maior[50];
	float valores[5], soma=0, media, maior_valor=0;
	int abaixo_10=0, acima_media=0;
	
	for(int i=0;i>5;i++){
		printf("Digite o Nome do Produto:\n", i+1);
		scanf("%s", &nomes[i]);
		printf("Insira o Valor do Produto: \n", i+1);
		scanf("%f", &valores[i]);
		
		soma=+valores[i];
		
		if(valores[i] < 10){
			abaixo_10++;
		}
		if(valores[i] > maior_valor){
			maior_valor = valores[i];
			strcpy(produto_maior, nomes[i]);
		}
	}
}


