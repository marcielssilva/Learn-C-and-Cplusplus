#include <stdio.h>
#include <string.h>
int main(){
	char cor[10];
	int i, j, achou;
		printf("Insira uma cor: \n");
		for(i=0;i<10;i++){
			gets(cor[i]);
		}
		while (1) {
		printf("Pesquise Cores em nosso Banco de Dados:  ( ou FIM para encerrar)\n");
		strupr(gets(cor[i]));
		if(strcmp(cor, "FIM") == 0){
			break;
		}
		achou = 0;
		for(i=0;i<5;i++){
			if(strcmp(cor, cor[i]) == 0) {
				printf("%s foi encontrado no indice %d \n", cor, i);
				achou = 1;
				break;
			}
		}
		if (!achou){
			printf("%s não foi encontrado \n", cor);
		}
	}
	}
}
