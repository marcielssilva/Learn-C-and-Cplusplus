#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade[10], qtd_id,qtd_pes, i, cont_alt;
	float alt[10], peso[10], val_alt, media_inf, media_alt, qtd40;
	for(i=0;i<10;i++){
		printf(" \n Insira sua idade : \n");
		scanf("%i", &idade[i]);
		printf(" \n Insira sua Altura: \n");
		scanf("%f", &alt[i]);
		printf(" \n Insira seu Peso \n");
		scanf("%f", &peso[i]);
	}
	for(i=0;i<10;i++){
		if(idade[i]>50){
			qtd_id++;
		}
	}
	for(i=0;i<10;i++){
		if(idade[i]> 10 && idade[i] < 20 ){
			cont_alt++;
			val_alt+=alt[i];
			media_alt = val_alt/cont_alt;
		}
	}
	for(i=0;i<10;i++){
		if(peso[i] < 40){
			qtd40+=peso[i];
			qtd_pes++;
			media_inf=qtd40/qtd_pes * 100;
		}
	}
	printf(" \n A quantidade de pessoa com idade superior a 50 anos:  %i", qtd_id);
	printf(" \n A media de alturas das pessoas com idade entre 10 e 20 anos: %.2f", media_alt);
	printf(" \n  A percentagem de pessoas com peso inferior a 40kg: %.2f", media_inf);
	
return 0;
	}
