#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num[10], num2[10], i, maior;
	
	for(i=0;i<10;i++){
		printf("Digite um número:");
		scanf("%d", &num[i]);
	}
	maior=num[0];
	for(i=0;i<10;i++){
		if(num[i]>maior){
			maior=num[i];
		}
	}
	for(i=0;i<10;i++){
		num2[i]=num[i] * maior;
	}
	printf("\n O maior numero é %d ", maior);
	printf("\n");
	for(i=0;i<10;i++){
		printf("%d ", num2[i]);
	}
	
return 0;
	}

