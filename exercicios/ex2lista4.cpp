#include <stdio.h>
#include <stdlib.h>

int maior_num(int a, int b, int c) {
    if (a > b && a > c) return a;
    else if (b > a && b > c) return b;
    else return c;
}

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    printf("O maior numero e: %d\n", maior_num(num1, num2, num3));

    return 0;
}

