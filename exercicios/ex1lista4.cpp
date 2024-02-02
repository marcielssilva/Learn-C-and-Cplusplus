#include <stdio.h>

int numPerf(int num) {
    int somaDiv = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            somaDiv += i;
        }
    }
    return somaDiv == num;
}

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (numPerf(num)) {
        printf("%d e um numero perfeito.\n", num);
    } else {
        printf("%d nao e um numero perfeito.\n", num);
    }

    return 0;
}

