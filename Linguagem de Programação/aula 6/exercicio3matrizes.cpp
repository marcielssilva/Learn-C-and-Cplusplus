#include <stdio.h>
#include <stdlib.h>

int main(){
	const int lin=5, col=3;
	int i=0, j=0;
	float nota[lin][col], media[lin];
	char aluno[lin][20];
	
	for(i=0; i<lin; i++){
		printf("Insira o nome do Aluno:\n");
		scanf("%s", &aluno[i]);		
	}
	
	printf("\n");	
	
	for(i=0; i<lin; i++){
		media[i] = 0;
		for(j=0; j<col; j++){
		printf("Insira a nota:\n");
		scanf("%f", &nota[i][j]);
		media[i]+= nota[i][j];
		}
		media[i] = media[i] / 3;
	}
	
	printf("Relatorio das notas dos alunos: \n");
	
	for(i=0;i<lin;i++){
			printf(" Aluno: %s media final : %.2f \n ", aluno[i], media[i]);
		}	
return 0;
}
