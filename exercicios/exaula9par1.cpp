#include <stdio.h>
#include <math.h>

void calcular_media(float notas[], int n, float *media) {
    float soma = 0.0;
    for(int i=0; i<n; i++) {
        soma += notas[i];
    }
    *media = soma / n;
}


void calcular_desvio_padrao(float notas[], int n, float media, float *desvio_padrao) {
    float soma = 0.0;
    for(int i=0; i<n; i++) {
        soma += pow(notas[i] - media, 2);
    }
    *desvio_padrao = sqrt(soma / n);
}

int main() {
    int n;
    printf("Insira o n�mero de notas: ");
    scanf("%d", &n);

    float notas[n];
    printf("Insira as notas: ");
    
    for(int i=0; i<n; i++) {
        scanf("%f", &notas[i]);
    }

    float media, desvio_padrao;
    calcular_media(notas, n, &media);
    calcular_desvio_padrao(notas, n, media, &desvio_padrao);

    printf("M�dia: %.2f\n", media);
    printf("Desvio Padr�o: %.2f\n", desvio_padrao);

    return 0;
}

