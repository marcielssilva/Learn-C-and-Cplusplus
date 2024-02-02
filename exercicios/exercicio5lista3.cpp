#include <stdio.h>

int main()
{
    int matriz[6+1][10];
    int i, j, soma;
   
    printf("Digite os elementos da matriz 6 x 10 :\n");
        for(i=0;i<6;i++){
            for(j=0;j<10;j++){
                scanf("%d", &matriz[i][j]);
            }
        }
        for(j=0;j<10;j++){
            soma=0;
        for(i=0;i<6;i++){
            soma+= matriz[i][j];
        }
        matriz[7][j]=soma;
    }
    printf("O resultado de cada coluna foi: \n");
    for(j=0;j<10;j++){
        printf("Coluna %d: %d\n", j+1, matriz[7][j]);
    }
    return 0;
}

