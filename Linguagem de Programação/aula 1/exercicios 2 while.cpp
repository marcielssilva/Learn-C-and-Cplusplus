#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL, "Portuguese");
 int idade, maxidade;
 float salario, media_5=0,cont5=0,cont2=0,cont40=0, media_id40, mediasal40, sal2, i=0;
 while( i < 10){
 	printf("Insira sua idade");
 	scanf("%i", &idade);
 	printf("Insira seu salario");
 	scanf("%f", &salario);

 	if(salario >= 5000){
 		media_5+=idade;
 		cont5++;
	}
	if(salario >= 2000){
		cont2++;
	}
	if(idade > 40){
		cont40++;
		media_id40+=salario;
	}
	if(idade > maxidade){
		maxidade+=idade;
		sal2 = salario;
	}else if( idade > maxidade){
		maxidade+=idade;
		sal2 = salario;
	}
 	i++;
 }
 if(cont5 > 0){
 
       media_5=media_5/cont5;
   }
   if( cont2 > 0){
       mediasal40=media_id40 / cont40;
   }
       printf("\n Média das pessoas que ganham mais de 5000: %.2f", media_5);
       printf("\n Quantidade de pessoas com salario superior a 2000 %.2f", cont2);
       printf("\n média salarial das pessoas com mais de 40 anos %.2f", mediasal40);
       printf("\n A pessoa mais velha e seu respectivo salario %.2f", maxidade, sal2);
       
 }

