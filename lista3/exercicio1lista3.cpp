#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][5];
    int i, j, soma = 0;
    int total = 0, menor = INT_MAX, maior = INT_MIN; // Inicializei menor com o maior valor possível e maior com o menor valor possível
    float media = 0;
   
    printf("Insira um numero:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
            if(matriz[i][j] % 3 == 0) {
                soma += matriz[i][j];
            }
            if(j == 2 && matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            media += matriz[i][j];
            total++;
        }
    }

    media = media / total;
    printf("O menor numero da matriz e: %d\n", menor);
    printf("A soma dos numeros multiplos de 3 e: %d\n", soma); // Adicionei a variável soma
    printf("O maior numero da 3a coluna da matriz e %d\n", maior); // Corrigi a mensagem de impressão
    printf("A media dos numeros da matriz e %.2f\n", media);

    return 0;
}


