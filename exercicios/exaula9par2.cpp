#include <stdio.h>

// Função para encontrar o maior e o menor valor
void encontrar_maior_menor(int numeros[], int n, int *maior, int *menor) {
    *maior = numeros[0];
    *menor = numeros[0];
    for(int i=1; i<n; i++) {
        if(numeros[i] > *maior) {
            *maior = numeros[i];
        }
        if(numeros[i] < *menor) {
            *menor = numeros[i];
        }
    }
}

int main() {
    int numeros[5];
    printf("Insira cinco valores inteiros: ");
    for(int i=0; i<5; i++) {
        scanf("%d", &numeros[i]);
    }

    int maior, menor;
    encontrar_maior_menor(numeros, 5, &maior, &menor);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}

