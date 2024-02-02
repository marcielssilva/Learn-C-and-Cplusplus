#include <stdio.h>

// Função para calcular a soma dos elementos do vetor
void calcular_soma(float vetor[], int n, float *soma) {
    *soma = 0.0;
    for(int i=0; i<n; i++) {
        *soma += vetor[i];
    }
}

int main() {
    float vetor[20];
    printf("Insira vinte valores reais: ");
    for(int i=0; i<20; i++) {
        scanf("%f", &vetor[i]);
    }

    float soma;
    calcular_soma(vetor, 20, &soma);

    printf("Soma dos elementos do vetor: %.2f\n", soma);

    return 0;
}

