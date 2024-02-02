#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, num, k, fat;
	
	for(i=1;i<=5;i++){
		printf("Insira um Numero \n");
		scanf("%d", &num);
		if(num > 0){
			fat=1;
			for(k=1;k<=num;k++){
				fat=fat * k;
			}
		}else{
			fat=0;
		}
		printf(" \n O Fatorial de %d é %d", num, fat);
	}
	return 0;
}

