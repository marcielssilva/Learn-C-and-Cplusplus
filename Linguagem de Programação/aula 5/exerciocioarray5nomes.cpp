#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char aNomes[5][10];
	int i, j, achou;
	char nomes[10];
	printf("Insira 5 nomes");
	for(i=0;i<10;i++){
		strupr(gets(aNomes[i]));
	}
	while (1) {
		printf("Para pesquisar nomes no BD  ( ou FIM para encerrar)\n");
		strupr(gets(nomes));
		if(strcmp(nomes, "FIM") == 0){
			break;
		}
		achou = 0;
		for(i=0;i<5;i++){
			if(strcmp(nomes, aNomes[i]) == 0) {
				printf("%s foi encontrado no indice %d \n", nomes, i);
				achou = 1;
				break;
			}
		}
		if (!achou){
			printf("%s não foi encontrado \n", nomes);
		}
	}
return 0;
		
}
