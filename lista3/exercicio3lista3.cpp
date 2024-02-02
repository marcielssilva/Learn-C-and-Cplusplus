#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nomes[5][20];
    int i, j, vendas[5][3];
    int total_vendedor, maior_venda, menor_venda, total_mes;
   
    printf("Insira o nome dos Vendedores \n");
    for(i = 0; i < 5; i++) {
        printf("Vendedor %d\n", i + 1);
        scanf("%s", nomes[i]);
    }

    printf("Insira o valor vendido pelos Vendedores a cada mês\n");
    for(i = 0; i < 5; i++) {
        printf("Vendedor %s\n", nomes[i]);
        for(j = 0; j < 3; j++) {
            printf("Mes %d: ", j + 1);
            scanf("%i", &vendas[i][j]);
        }
    }

    printf("O valor total vendido por vendedor foi:\n");
    for(i = 0; i < 5; i++) {
        total_vendedor = 0;
        for(j = 0; j < 3; j++) {
            total_vendedor += vendas[i][j];
        }
        printf("%s: %i\n", nomes[i], total_vendedor);
    }

    maior_venda = vendas[0][0];
    for(i = 0; i < 5; i++) {
        if(vendas[i][0] > maior_venda) {
            maior_venda = vendas[i][0];
        }
    }
    printf("A maior venda do mes 1 foi: %i \n", maior_venda );

    menor_venda = vendas[0][2];
    for(i = 0; i < 5; i++) {
        if(vendas[i][2] < menor_venda) {
            menor_venda = vendas[i][2];
        }
    }
    printf("A menor venda do mes 3 foi: %i\n", menor_venda);

    printf("O valor total vendido por mes de todos os vendedores foi: \n");
    for(j = 0; j < 3; j++) {
        total_mes = 0;
        for(i = 0; i < 5; i++) {
            total_mes += vendas[i][j];
        }
        printf("Mes %d: %i \n", j + 1, total_mes);
    }

    return 0;
}


