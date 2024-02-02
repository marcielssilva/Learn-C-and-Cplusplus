#include <stdio.h>
#include <stdlib.h>

void nota_final(float nota) {
    char conceito;

    if (nota >= 9 && nota <= 10) conceito = 'A';
    else if (nota >= 8 && nota < 9) conceito = 'B';
    else if (nota >= 6 && nota < 8) conceito = 'C';
    else if (nota >= 3.4 && nota < 6) conceito = 'D';
    else if (nota >= 2 && nota < 3.4) conceito = 'E';
    else if (nota >= 0 && nota < 2.9) conceito = 'F';
    else {
        printf("Nota invalida!\n");
        return;
    }

    printf("O conceito da nota %.1f e %c\n", nota, conceito);
}

int main() {
    float nota;

    printf("Digite a nota do estudante: ");
    scanf("%f", &nota);

    nota_final(nota);

    return 0;
}

