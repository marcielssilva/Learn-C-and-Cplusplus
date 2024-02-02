#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade[10], sup, cont, cont_id, qtd, i, percent;
	float media,media_id, percem;
	
	for(i=0;i<10;i++){
		printf("\n Insira sua Idade \n");
		scanf("%i", &idade[i]);
	}
	for(i=0;i<10;i++){
		cont_id=+idade[i];
		if(idade[i]>50){
			cont++;
		}
	}
	for(i=0;i<10;i++){
		if(idade[i] < 30){
			percent++;
			percem=percent / 10*100; 
		}
	}
	for(i=0;i<10;i++){
		media_id=cont_id / 10;
		if(idade[i]< media_id){
			qtd++;
		}
	}
	printf("A quantidade de pessoas com idade superior a 50 anos %i \n", cont);
	printf(" A média da Idade das pessoas %.2f \n", media_id);
	printf(" A quantidade de pessoas com menos de 30 anos que participaram da pesquisa %i \n", percent);
	printf(" A percentagem de pessoas com idade superior a 30 anos %.2f \n", percem);

return 0;

	}

