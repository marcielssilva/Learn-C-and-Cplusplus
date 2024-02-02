#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void imprimir_nota(float nota, char Nota_Final);

int main(){
	const int linha = 1, coluna = 3;
	
	float nota[linha][coluna];
	for(int i = 0; i < coluna; i++ ){
	
	printf("Insira a nota do Aluno %i :\n", i+1);
	scanf("%f", &nota[linha][i]);
	imprimir_nota(nota[linha][i]);
	}
	return 0;
}

void imprimir_nota(float nota[linha][coluna], char Nota_Final){

	for(int i = 0; i < coluna; i++){
		if(nota[linha][i] >= 9 && nota[linha][i] <= 10){
			printf("Nota Final : A\n");
		}
		if(nota[linha][i] <= 8.99 && nota[linha][i] >= 7){
			printf("Nota Final : B\n");
		}
		
	}
}
