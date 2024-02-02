#include <stdio.h>
#include <stdlib.h>

void preencheMatriz(int matriz[3][3]) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int contarPares(int matriz[3][3]) {
    int pares = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                pares++;
            }
        }
    }
    return pares;
}

int somaDiagonalPrincipal(int matriz[3][3]) {
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += matriz[i][i];
    }
    return soma;
}

float calcularMedia(int matriz[3][3]) {
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    return (float)soma / 9.0;
}

int main() {
    int matriz[3][3];

    preencheMatriz(matriz);

    int pares = contarPares(matriz);
    int somaDiagonal = somaDiagonalPrincipal(matriz);
    float media = calcularMedia(matriz);

    printf("Quantidade de numeros pares na matriz: %d\n", pares);
    printf("Soma da diagonal principal: %d\n", somaDiagonal);
    printf("Media dos elementos da matriz: %.2f\n", media);

    return 0;
}

