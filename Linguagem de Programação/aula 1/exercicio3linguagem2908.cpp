#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, soma, num, maior, menor;
	float media_id=0;
	
	for( i=1; i<=10;i++){
		printf("Insira sua idade \n");
		scanf("%d", &num);
		
		if(i==1){
			maior=num;
		}else if(num>maior){
			maior=num;
		}
		if(i==1){
			menor=num;
		}else if(num<menor){
			menor=num;
		}
		media_id+=num;
	}
	
		printf(" \n A Maior idade foi de: %i", maior);
		printf(" \n A Menor idade foi de: %i", menor);
		printf(" \n A media das idades foi de: %2.f", media_id/10);
	return 0;
}
