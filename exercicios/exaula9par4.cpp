#include <stdio.h>

void tabuada(int n) {
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}

int main() {
    int numero;
    printf("Digite um número entre 2 e 10: ");
    scanf("%d", &numero);
    if(numero > 1 && numero <= 10) {
        tabuada(numero);
    } else {
        printf("Número inválido.\n");
    }
    return 0;
}

