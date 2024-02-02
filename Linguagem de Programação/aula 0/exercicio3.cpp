#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float nota1, nota2, nota3, calc;
	int op;
	
		printf("Insira a nota 1: \n");
		scanf("%f", &nota1);
		printf("Insira a nota 2: \n");
		scanf("%f", &nota2);
		printf("Insira a nota 3: \n");
		scanf("%f", &nota3);
		printf("Escolha o metodo de cálculo da nota: 1- Aritmética, 2 - Ponderada \n");
		scanf("%d", &op);
	switch(op){
		case 1:
			calc = (nota1 + nota2 + nota3) / 3;
		break;
		case 2:
			calc = (nota1 * 3 + nota2 * 4 + nota3 * 5) / 12 ;
		break;
		default:
			printf("Operação Inválida");
	}
		printf(" \n Média Final: %.2f", calc);
}
