#include <stdio.h>
#include <stdlib.h>
int func_primo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int vetor[10];
    int soma = 0, cont_primo = 0, cont_impar = 0, soma_impar = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &vetor[i]);

        if (func_primo(vetor[i])) cont_primo++;
        if (vetor[i] > 10 && vetor[i] % 5 == 0) soma += vetor[i];
        if (vetor[i] % 2 != 0) {
            cont_impar++;
            soma_impar += vetor[i];
        }
    }

    printf("Quantidade de primos: %d\n", cont_primo);
    printf("Soma dos numeros maiores que 10 e multiplos de 5: %d\n", soma);
    printf("Media dos numeros impares: %.2f\n", (float)soma_impar/cont_impar);

    return 0;
}

