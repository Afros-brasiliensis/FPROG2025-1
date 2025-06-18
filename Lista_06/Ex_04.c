
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int M[4][6];
    int i, j, soma_linha2 = 0, soma_coluna5 = 0, soma_coluna_pares = 0, soma_linha_impar = 0, mult_linha1_linha4 = 0;

    srand(time(NULL));

    printf("Matriz gerada (4x6):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            M[i][j] = rand() % 21 - 10;
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }

    for (j = 0; j < 6; j++) soma_linha2 += M[1][j];
    for (i = 0; i < 4; i++) soma_coluna5 += M[i][4];
    for (j = 0; j < 6; j += 2)
        for (i = 0; i < 4; i++) soma_coluna_pares += M[i][j];
    for (i = 1; i < 4; i += 2)
        for (j = 0; j < 6; j++) soma_linha_impar += M[i][j];
    for (j = 0; j < 6; j++) mult_linha1_linha4 += M[0][j] * M[3][j];

    printf("\nSoma segunda linha: %d", soma_linha2);
    printf("\nSoma quinta coluna: %d", soma_coluna5);
    printf("\nMultiplicacao L1 x L4: %d", mult_linha1_linha4);
    printf("\nSoma colunas pares: %d", soma_coluna_pares);
    printf("\nSoma linhas impares: %d\n", soma_linha_impar);

    return 0;
}
