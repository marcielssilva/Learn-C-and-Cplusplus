#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_pessoas = 10;
    float salario[num_pessoas], idade[num_pessoas], num_filhos[num_pessoas];
    float total_salario = 0, total_filhos = 0, total_salario_20_30 = 0, total_filhos_15_25 = 0;
    int count_20_30 = 0, count_15_25 = 0;

    for(int i=0; i<num_pessoas; i++) {
        printf("Insira o salario, idade e numero de filhos da pessoa %d:\n", i+1);
        scanf("%f %f %f", &salario[i], &idade[i], &num_filhos[i]);

        total_salario += salario[i];
        total_filhos += num_filhos[i];

        if(idade[i] >= 15 && idade[i] <= 25) {
            total_filhos_15_25 += num_filhos[i];
        }
        if(idade[i] >= 20 && idade[i] <= 30) {
            total_salario_20_30 += salario[i];
            count_20_30++;
        }
    }
    printf("A media de salario da populacao foi: %.2f\n", total_salario/num_pessoas);
    printf("A media do numero de filhos foi: %.2f\n", total_filhos/num_pessoas);
    printf("A quantidade de filhos das pessoas que tem idade entre 15 a 25 anos foi: %.2f\n", total_filhos_15_25);
    if(count_20_30 > 0) {
        printf("A media de salario de pessoas que tem idade entre 20 a 30 anos foi: %.2f\n", total_salario_20_30/count_20_30);
    } else {
        printf("Nao ha pessoas com idade entre 20 a 30 anos.\n");
    }

    return 0;
}
