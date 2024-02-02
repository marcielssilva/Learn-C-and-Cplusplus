#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[2][6], i, j, maior_num = 0, somam3 = 0, soma = 0, somamedia = 0;
    float matrizresu[6], media2lin, media_matriz;
    
    media2lin = 0;
    media_matriz = 0;

    printf("Insira os elementos da matriz:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > maior_num) {
                maior_num = matriz[i][j];
            }
            if(matriz[i][j] % 3 == 0) {
                somam3 += matriz[i][j];
            }
            if(i == 1) {
                soma += matriz[1][j];
            }
            somamedia += matriz[i][j];
        }
    }

    media_matriz = somamedia / 12;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 6; j++) {
            matrizresu[j] = matriz[i][j] * media_matriz;
        }
    }

    media2lin = soma / 6;
    
    printf("O maior numero da matriz foi: %d\n", maior_num);
    printf("A soma dos multiplos de 3 foi %d\n", somam3);
    printf("A media dos numeros da segunda linha i=2 foi: %.2f\n", media2lin);
    printf("A media dos numeros da matriz foi: %.2f\n", media_matriz);
    
    for(i = 0; i < 6; i++) {
        printf("O resultado da multiplicacao de cada elemento pela media da matriz foi: %.2f\n", matrizresu[i]);
    }

    return 0;
}
