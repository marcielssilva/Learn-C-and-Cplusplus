#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	
	float nota1, nota2, media_aluno, media_sala;
	char aluno;
	int i;
	setlocale(LC_ALL, "Portuguese");
	for(i = 1; i <= 5; i++){
		printf("Insira o nome do Aluno \n");
		scanf("%s", &aluno);
		printf("nota da prova 1 \n");
		scanf("%f", &nota1);
		printf("nota da prova 2 \n");
		scanf("%f", &nota2);
		media_aluno = (nota1 + nota2)/2;
		printf("A média do aluno: %f \n", media_aluno);
		media_sala = media_sala + media_aluno;
	}
		media_sala = media_sala / 5;
			printf("Media da Turma %f \n", media_sala);	
}
