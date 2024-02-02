#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main(){
	
	float notas[5][4], media[5], maior_med=0, calc=0;
	int aluno_maiormed = 0;
	char nome[5][10], resp[10];
	int i, j;
	
	printf("Insira os nomes dos alunos: \n");
	for(i=0;i<5;i++){
		scanf("%s", &nome[i]);
	}
	for(i=0;i<5;i++){
		printf("Insira as notas dos alunos:%s\n", nome[i]);
		calc=0;
		for(j=0;j<4;j++){
			scanf("%f", &notas[i][j]);
			calc+=notas[i][j];
		}
		media[i] = calc / 4;
		
		if(media[i]>maior_med){
			maior_med=media[i];
			aluno_maiormed = i;
		}
	}
	
	strcpy(resp, nome[aluno_maiormed]);
	printf(" O aluno com a maior media foi: %s %.2f\n", resp, maior_med);
	for(i=0;i<5;i++){
		printf("A media do aluno %s foi: %.2f\n", nome[i], media[i]);
	}
return 0;
}
