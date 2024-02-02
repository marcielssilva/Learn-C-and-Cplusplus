#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char nomes[5][100];
	int i;
	for( i=0;i<5;i++){
		printf("\n Digite um nome \n");
		gets(nomes[i]);
	}
	printf("\n O s nomes digitados foram: \n");
	for(i=0;i<5;i++){
		printf("%s \n",nomes[i]);
	}
return 0;
}
