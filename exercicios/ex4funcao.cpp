#include <stdio.h>


float calculamedia(float nota1, float nota2) {
    return (n1 + n2) / 2.0;
}

int main() {
    float notas[5][2];

    for (int i = 0; i < 5; i++) {
        printf("Digite as notas do aluno %d (separadas por espaço): ", i+1);
        scanf("%f %f", &notas[i][0], &notas[i][1]);
        
        float media = calculamedia(notas[i][0], notas[i][1]);
        
        printf("A média do aluno %d é %.2f\n", i+1, media);
    }

    return 0;
}

