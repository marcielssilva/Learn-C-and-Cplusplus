#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL, "Portuguese");
 int i=0, idade, qtd;
 float peso, media_id, media_f;
 	for(i=0; i < 10; i++){
 		
		printf("Insira sua idade \n");
 		scanf("%d", &idade);
 		printf("Insira seu peso \n");
 		scanf("%f", &peso);
 		
		media_id+=idade;
 		
 		if( peso > 90){
 			qtd++;
		 }
	 }
	 	media_id = media_id / 10;
		printf(" \n A Quantidade de pessoas com mais de 90 quilos: %d", qtd);
		printf(" \n A media de idade das dez pessoas foi: %2.f", media_id);

}
