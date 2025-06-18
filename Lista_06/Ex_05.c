
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int M[4][6], i, j, maior, menor;

    srand(time(NULL));
    maior = menor = 0;

    printf("Matriz gerada (4x6):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            M[i][j] = rand() % 21 - 10;
            printf("%d\t", M[i][j]);
            if (i == 0 && j == 0) maior = menor = M[i][j];
            if (M[i][j] > maior) maior = M[i][j];
            if (M[i][j] < menor) menor = M[i][j];
        }
        printf("\n");
    }

    printf("\nMaior valor: %d", maior);
    printf("\nMenor valor: %d\n", menor);

    return 0;
}
